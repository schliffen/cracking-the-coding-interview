#include "3.7.h"
#include "lib/datastructures/DLinkedList.h"
#include <string>
#include <assert.h>
#include <iostream>

using namespace std;

/*
    3.7 An animal shelter holds only dogs and cats, and operates on a strictly "first in, first out" basis.
    People must adopt either the "oldest" (based on arrival time) of all animals at the shelter, or they
    can select whether they would prefer a dog or a cat (and will receive the oldest animal of that type).
    They cannot select which specific animal they would like. Create the data structures to maintain this
    system and implement operations such as enqueue, dequeueAny, dequeueDog and dequeueCat.You may use the
    built-in LinkedList data structure.
*/

struct Animal
{
    enum Type
    {
        Cat,
        Dog
    };

    Animal(string name, Type type):
        m_name(name),
        m_type(type)
    {
    }

    string  m_name;
    Type    m_type;
};

class Shelter
{
public:

    Shelter():
        m_pAnimals(0),
        m_pLast(0)
    {
    }

    ~Shelter()
    {
    }

    void enqueue(Animal animal)
    {
        DNode<Animal>* pNewAnimal = new DNode<Animal>(animal);
        if (m_pAnimals)
        {
            pNewAnimal->next() = m_pAnimals;
            m_pAnimals->prev() = pNewAnimal;
        }
        m_pAnimals = pNewAnimal;
        if (!m_pLast)
        {
            m_pLast = pNewAnimal;
        }
    }

    Animal dequeueAny()
    {
        assert(m_pLast);
        assert(m_pLast->prev());
        Animal animal = m_pLast->data();
        DNode<Animal>* pPrev = m_pLast->prev();
        pPrev->next() = 0;
        delete m_pLast;
        m_pLast = pPrev;
        return animal;
    }

    Animal dequeueCat()
    {
        return dequeue(Animal::Cat);
    }

    Animal dequeueDog()
    {
        return dequeue(Animal::Dog);
    }

    Animal dequeue(Animal::Type type)
    {
        DNode<Animal>* pNode = m_pLast;
        while (pNode)
        {
            if (pNode->data().m_type == type)
            {
                Animal animal = pNode->data();
                if (pNode->prev())
                    pNode->prev()->next() = pNode->next();
                if (pNode->next())
                    pNode->next()->prev() = pNode->prev();
                if (pNode == m_pLast)
                {
                    if (pNode->prev())
                        m_pLast = pNode->prev();
                    else
                        m_pLast = 0;
                }
                if (pNode == m_pAnimals)
                    m_pAnimals = 0;
                delete pNode;
                return animal;
            }
            pNode = pNode->prev();
        }
        assert(false);
    }

private:
    DNode<Animal>*   m_pAnimals;
    DNode<Animal>*   m_pLast;
};

void test3_7()
{
    Shelter shelter;
    shelter.enqueue(Animal("cookie", Animal::Cat));
    shelter.enqueue(Animal("charms", Animal::Dog));
    shelter.enqueue(Animal("bonnie", Animal::Dog));
    shelter.enqueue(Animal("clyde", Animal::Cat));
    shelter.enqueue(Animal("ralphie", Animal::Dog));
    assert(shelter.dequeueAny().m_name == "cookie");
    assert(shelter.dequeueCat().m_name == "clyde");
    assert(shelter.dequeueDog().m_name == "charms");
    cout << "3.7 passed!" << endl;
}
