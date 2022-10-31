This project provides an understanding and the right application of File Input and Output (I/O) in C - Programming. 
It ecompasses the C-Standard file descriptors and System calls.
The programs are executed thus;

0 - Writes a function that reads a text file and prints it to the POSIX standard output.
* where letters is the number of letters, read and print.
* returns the actual number of letters it could read and print.
* if the file can not be opened or read, return 0.
* if filename is NULL return 0.
* if write fails or does not write the expected amount of bytes, return 0.

1 - Creates a function that creates a file.
* where filename is the name of the file to create and text_content is a NULL terminated string to write to the file.
* Returns: 1 on success, -1 on failure (file can not be created, file can not be written, write “fails”, etc…).
* The created file must have those permissions: rw-------. If the file already exists, do not change the permissions.
* if the file already exists, truncate it.
* if filename is NULL return -1.
* if text_content is NULL create an empty file.

2 - Writes a function that appends text at the end of a file.
* where filename is the name of the file and text_content is the NULL terminated string to add at the end of the file.
* Return: 1 on success and -1 on failure.
* Do not create the file if it does not exist.
* If filename is NULL return -1.

3 - Writes a program that copies the content of a file to another file.
* Usage: cp file_from file_to.
* if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
* if file_to already exists, truncate it.

4 - Writes a program that displays the information contained in the ELF header at the start of an ELF file.

Usage: elf_header elf_filename
Displayed information;
Magic
Class
Data
Version
OS/ABI
ABI Version
Type
Entry point address
Format: the same as readelf -h (version 2.26.1)
If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr.

The prototypes of all the functions are stored in the main.h file.
