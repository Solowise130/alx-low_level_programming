This project is focused on the application of "singly linked lists in C-Programming". The forgoing programs where executed thus;

0 - Writes a function that prints all the elements of a listint_t list.
* Return: the number of nodes using the printf function.

1 - Writes a function that returns the number of elements in a linked listint_t list.

2 - Writes a function that adds a new node at the beginning of a listint_t list.
* Return: the address of the new element, or NULL if it failed.

3 - Writes a function that adds a new node at the end of a listint_t list.
* Return: the address of the new element, or NULL if it failed.

4 - Writes a function that frees a listint_t list.

5 - Writes a function that frees a listint_t list.
* The function sets the head to NULL.

6 - Writes a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
* if the linked list is empty return 0.

7 - Writes a function that returns the nth node of a listint_t linked list.
* where index is the index of the node, starting at 0
* if the node does not exist, return NULL 

8 - Writes a function that returns the sum of all the data (n) of a listint_t linked list.
* if the list is empty, return 0.

9 - Writes a function that inserts a new node at a given position.
* where idx is the index of the list where the new node should be added. Index starts at 0
* Returns: the address of the new node, or NULL if it failed
* if it is not possible to add the new node at index idx, do not add the new node and return NULL.

10 - Writes a function that deletes the node at index index of a listint_t linked list.
* where index is the index of the node that should be deleted. Index starts at 0.
* Returns: 1 if it succeeded, -1 if it failed.

11 - Writes a function that reverses a listint_t linked list.
* Returns: a pointer to the first node of the reversed list.
* Use only 1 loop.

12 - Writes a function that prints a listint_t linked list.
* Returns: the number of nodes in the list.
* This function can print lists with a loop.
* If the function fails, exit the program with status 98.

13 - Writes a function that frees a listint_t list.
* This function can free lists with a loop.
* Returns: the size of the list that was free’d
* The function sets the head to NULL.

14 - Writes a function that finds the loop in a linked list.
* Returns: The address of the node where the loop starts, or NULL if there is no loop.

The prototypes of the entire functions are included in the header file called "lists.h".
