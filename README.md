## Building

Please build using qmake from the command line, or open the .pro in QtCreator. The unit tests can be built using the make command, too.

```
git clone https://github.com/shyal/cracking-the-coding-interview.git
cd cracking-the-coding-interview/projectfiles
qmake cracking-the-coding-interview.pro
```

or simply open the .pro in QtCreator, build and run.

-------------------------

### Chapter 1 - Arrays and Strings

This chapter contains very standard and entry level questions on string and array manipulation. I got some interesting feedback from reddit /r/programming saying I should probably use more pointer arithmetic, and less array subscripts. I'm taking this advice on board and will go over these answers again.

-------------------------

### Chapter 2 - Linked Lists

These questions get more interesting. I actually wrote two linked list classes, so I wouldn't have to write as much boilerplate code.

[lib/datastructures/LinkedList.h](lib/datastructures/LinkedList.h)

and

[lib/datastructures/DLinkedList.h](lib/datastructures/DLinkedList.h)


-------------------------

### Chapter 3 - Stacks and Queues

Once again, I wrote a DS for this one, to avoid re-writing boilerplate code.

[lib/datastructures/Stack.h](lib/datastructures/Stack.h)

Whenever I needed to use other data structures, I wrote my own, such as the [lib/datastructures/vector.h](lib/datastructures/vector.h) class.

I realise that writing your own data structures is a questionable practice in the real world, however writing your own data structures does come up in technical interviews.

A bonus of the vector class is that it has the ability to use c arrays for objects that are reallocatable (as most are). This is very similar to the [FBVector class from folly at facebook](https://github.com/facebook/folly/blob/master/folly/docs/FBVector.md). The performance far exceeds that of std's vector class, but again, this is all dicey / showoff territory.
