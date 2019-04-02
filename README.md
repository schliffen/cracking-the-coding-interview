## Building

Please build using qmake from the command line, or open the .pro in QtCreator. The unit tests can be built using the make command, too.

```
git clone https://github.com/shyal/cracking-the-coding-interview.git
cd cracking-the-coding-interview/projectfiles
qmake cracking-the-coding-interview.pro
```

or simply open the .pro in QtCreator, build and run.

-------------------------

### Data Structures

One question that occurs to many people facing a technical interview, is how should they handle data structures, should they write their own? Or use those of the standar library in that language. I know some of the companies I deal with ask you two write your own data structure as a technical interview, so I went ahead and wrote my own as an exercise.

However I do realise that writing your own data structures is a dubious practice in the real world, 

- [LinkedList.h](lib/LinkedList.h) / [.hpp](lib/LinkedList.hpp)
- [DLinkedList.h](lib/DLinkedList.h) / [.hpp](lib/DLinkedList.hpp)
- [Queue.h](lib/Queue.h) / [.hpp](lib/Queue.hpp)
- [Stack.h](lib/Stack.h) / [.hpp](lib/Stack.hpp)
- [BinaryTree.h](lib/BinaryTree.h) / [.hpp](lib/BinaryTree.hpp)
- [digraph.h](lib/digraph.h) / [.cpp](lib/digraph.cpp)
- [vector.h](lib/vector.h) / [.hpp](lib/vector.hpp)
- [string.h](lib/string.h) / [.cpp](lib/string.cpp)
- [hash_table.h](lib/hash_table.h) / [.hpp](lib/hash_table.hpp)

-------------------------

### Templates

The data structures are templated, to handle all the data types that take place in the questions. For this reason I placed the body of the code in .hpp files included at the end of the headers. This is a common practice, e.g boost.


-------------------------

### Namespace

The data structures all reside in the ctci namespace, so they can be easily substitude with the STL.

-------------------------

### Chapter 1 - Arrays and Strings

This chapter contains very standard and entry level questions on string and array manipulation. I got some interesting feedback from reddit /r/programming saying I should probably use more pointer arithmetic, and less array subscripts. I'm taking this advice on board and will go over these answers again.

-------------------------

### Chapter 2 - Linked Lists

These questions get more interesting. I actually wrote two linked list classes, so I wouldn't have to write as much boilerplate code.

[lib/LinkedList.h](lib/LinkedList.h)

and

[lib/DLinkedList.h](lib/DLinkedList.h)


-------------------------

### Chapter 3 - Stacks and Queues

Once again, I wrote a DS for this one, to avoid re-writing boilerplate code.

[lib/Stack.h](lib/Stack.h)

Whenever I needed to use other data structures, I wrote my own, such as the [lib/vector.h](lib/vector.h) class.

I also wrote my Queue class:

[lib/Queue.h](lib/Queue.h)

But ended up not using it.

-------------------------

### Chapter 4 - Trees and Graphs

By far the most fun and interesting chapter. Once again, I added my own data structures. e.g

- [lib/BinaryTree.h](lib/BinaryTree.h)
- [lib/digraph.h](lib/digraph.h)

Some utils:

- [lib/utils/SampleBinaryTrees.h](lib/utils/SampleBinaryTrees.h)

This allows to generate various binary trees, whether balanced, or random etc.

- [lib/utils/BinaryTreeRenderer.h](lib/utils/BinaryTreeRenderer.h)

This class allows to render out your binary trees using dot. It's a lot of fun being able to visualise trees as you're working with them.

![Int Binary Tree](https://raw.githubusercontent.com/shyal/cracking-the-coding-interview/master/binaryTreeInt.png "Int Binary Tree")

-------------------------

### Chapter 5 - Bit Manipulation

Not the most fun chapter, but definitely useful. Mastery of bit manipulation and masking is handy, and often required in many programming jobs, so far from a waste of time.

Some of the questions are tortuous, though.

-------------------------

## Chapter 7 - Mathematics and Probability

Didn't get very far in this chapter. Some of the questions are really fundamental, and worth knowing. Some of them, like 7.4 are plain stupid.

-------------------------

## Chapter 9 - Recursion and Dynamic Programming

Great chapter, which definitely provides food for thought. I particularly enjoyed question [9.7](9.7-recursionAndDynamicProgramming.cpp) which involved writing a paint fill. I went ahead and rendered them in ascii too, which was a lot of fun.

```
    // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
    // 1 1 1 1 1 1 1 1 1 1 1 1                         1 1 1 1 1 1
    // 1 1 1 1 1 1 1 1 1 1 1 1                         1 1 1 1 1 1
    // 1 1 1                                           1 1 1 1 1 1
    // 1 1 1                                           1 1 1 1 1 1
    // 1 1 1                                           1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1                                     1 1 1 1 1 1 1 1 1
    // 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1 1
```

