# cracking-the-coding-interview

The technical interview topic is being discussed a lot these days. There's a strong and valid argument floating around message boards and developer meets: that focussing on hiring developers through technical interviews yields a team that is good at solving technical interviews, as opposed to a team that is good at writing clean, mature, maintainable code.

But technical interviews remain a reality. So until things change, the correct approach is to get good at the game and beat it. Using it to your advantage, and learning new things along the way. This what I try to achieve in this repo.

My way to have fun with this process is to write my own containers and algorithms, and use them in the solutions I provide. The good news is, in doing so, I got to learn a lot about how to write containers that outperform the STL's by a large factor, sometimes up to 8x. You'll find those in the lib/datastructures section.

This repository is for learning purposes, and in this spirit I strongly recommend opening the project file in QtCreator, and stepping through the solutions with the debugger. While doing so, you'll also be able to step into the world of data structures, and algorithms.

Also, writing a container is quite a typical interview question. Knowing how to write a high performance container will certaintly not hinder your candidacy; on the contrary.

Every solution, container, and algorithm is test driven. The tests for the solutions are in the solutions themselves. The unit tests for my containers are in the unittest section.

## Building

Please build using qmake from the command line, or open the .pro in QtCreator. The unit tests can be built using the make command, too.

## Memory profile

I'm running the code on valgrind as I go along, and so far the amount of memory issues are minimal. By the time I'm finished with this repo there will be none.
