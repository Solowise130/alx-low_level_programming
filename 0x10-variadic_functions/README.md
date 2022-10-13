This project is centered on C - Variadic functions with focus on the application of va_start, va_arg va_end macros as well as the const type qualifier.

The sourecode executes the following functions;
0 - Writes a function that returns the sum of all its parameters.
* If n == 0, return 0.

1 - Writes a function that prints numbers, followed by a new line.
* where separator is the string to be printed between numbers
* n is the number of integers passed to the function
* You are allowed to use printf
* If separator is NULL, don’t print it
* Print a new line at the end of your function.

2 - Writes a function that prints strings, followed by a new line.
* where separator is the string to be printed between the strings
* and n is the number of strings passed to the function
* If separator is NULL, don’t print it
* If one of the string is NULL, print (nil) instead
* Print a new line at the end of your function.

3 - Writes a function that prints anything.
* where format is a list of types of arguments passed to the function
* c: char
* i: integer
* f: float
* s: char * (if the string is NULL, print (nil) instead
* any other char should be ignored
* Print a new line at the end of your function.
