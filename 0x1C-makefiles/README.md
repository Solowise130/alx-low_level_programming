Makefiles

A Makefile consists of a set of rules. A rule generally looks like this: targets: prerequisites command command command. The targets are file names, separated by spaces. Typically, there is only one per rule. The commands are a series of steps typically used to make the target(s).


REFERENCE

https://makefiletutorial.com/#getting-started

Learning Objectives

In this project, I got acquited with the following;

-What are make, Makefiles
-When, why and how to use Makefiles
-What are rules and how to set and use them
-What are explicit and implicit rules
-What are the most common / useful rules
-What are variables and how to set and use them

FILES AND EXPECTED OUTPUT

0-Makefile - Creates my first Makefile

Requirements;

name of the executable: school
rules: all
variables: none.

1-Makefile - Creates my first Makefile

Requirements;

name of the executable: school
rules: all
variables: CC, SRC
           CC: the compiler to be used
           SRC: the .c files

2-Makefile - Creates my first useful Makefile.

3-Makefile - Adds to my first useful Makefile.

4-Makefile - Creates a complete Makefile.

5-island_perimeter.py - Creates a function def island_perimeter(grid): that returns the perimeter of the island described in grid:

Grid is a list of list of integers.

100-Makefile - Creates a make -f 100-Makefile
