#include "4.2.h"
#include "Vector.h"
#include "digraph.h"

#include <assert.h>

/*
    4.2 Given a directed graph, design an algorithm to
    find out whether there is a route between two nodes.
*/

void test4_2()
{
    DiGraph a("A");
    DiGraph b("B");
    DiGraph c("C");
    DiGraph d("D");
    DiGraph e("E");
    DiGraph f("F");
    DiGraph g("G");

    a.connect(&b);
    a.connect(&c);
    b.connect(&c);
    c.connect(&e);
    c.connect(&d);
    d.connect(&f);
    f.connect(&g);
    g.connect(&e);

    std::vector<DiGraph*> path;
    std::vector<DiGraph*> visited;

    bool found = a.getPathTo(&g, path, visited);

    assert(found);

    assert(path[0] == &f);
    assert(path[1] == &d);
    assert(path[2] == &c);
    assert(path[3] == &b);
}
