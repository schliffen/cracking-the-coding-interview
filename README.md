# cracking-the-coding-interview

The technical interview topic gets thrown around message boards like a hot potatoe these days. There's a rising notion that technical interviews are stupid, and useless, and that there's no proof that hiring developers who perform well in a technical interviews will necessarily yield a good team.

I won't enter the debate here, but the only way I could get myself to truely enjoy the process of going through this great book, 'Cracking the Coding Interview' was to have fun with it, by writing my own stl compatible containers, then try and solve the challenges myself, and only looking at the solutions if I really needed to.

The good news is, in doing so, I got to learn a lot about how to write containers that outperform the STL's by a huge factor, sometimes up to 8x. You'll find those in the lib/datastructures section.

This repository is for learning purposes, and in this spirit I strongly suggest opening the Qt project file in QtCreator, and stepping through the solutions with the debugger. While doing so, you'll also be able to step into the data structures, and algorithms, and see how they work too.

Another reason I decided to write my own containers, was that enabled me to focus on the solutions, without having to re-write boilerplate code each time. I could have used STL containers, and I do so, in a few places, where my own containers didn't cut it. But in some cases, using the STL is a cope-out of the interview question, and although it would demonstrate your knowledge of the STL, it wouldnt' necessarily display our skillset at writing algorithms that are optimised for the given problem.

Every solution, container, and algorithm is test driven. The tests for the solutions are in the solutions themselves. The tests for my containers are in the unittest section.

## Building

Please build using qmake from the command line, or open the .pro in QtCreator. The unit tests can be built using the make command, too.

## Memory profile

I'm running the code on valgrind as I go along, and so far the amount of memory issues are minimal. By the time I'm finished with this repo there will be none.
