This project focuses on C - Function pointers, it's usefulness and apllicability in C-Programming. The codes here are meant to execute the following functions;

0 - Writes a function that prints a name.

1 - Writes a function that executes a function given as a parameter on each element of an array where;
* size is the size of the array and 
* action is a pointer to the function you need to use.

2 - Writes a function that searches for an integer where;
* size is the number of elements in the array array.
* cmp is a pointer to the function to be used to compare values.
* int_index returns the index of the first element for which the cmp function does not return 0.
* If no element matches, return -1.
* If size <= 0, return -1.

3 - Writes a program that performs simple Arithmetic operations using the Standard Library.
* The program prints the result of the operation with the output stored in an int, followed by a new line.
* If the number of arguments is wrong, print Error, followed by a new line, and exit with the status 98
* If the operator is none of the above, print Error, followed by a new line, and exit with the status 99
* If the user tries to divide (/ or %) by 0, print Error, followed by a new line, and exit with the status 100.

4 - Writes a program that prints the opcodes of its own main function "./main number_of_bytes" thus;
* The opcodes are  printed in hexadecimal, lowercase.
* Each opcode is two char long.
* Listing ends with a new line.
