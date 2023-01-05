This Project focuses on Hash tables in C - programming with emphasis on C Data Structures, Algorithms and Hash Functions.
The prototypes odf all the functions are stored in the header file called "hash_tables.h".
The files where meant to output thus;

0-hash_table_create.c - Writes a function that creates a hash table.
*Returns a pointer to the newly created hash table
If something goes wrong, the function returns NULL.

1-djb2.c - Writes a hash function implementing the djb2 algorithm.

2-key_index.c - Writes a function that gives you the index of a key.

3-hash_table_set.c - Writes  function that adds an element to the hash table.
*Returns: 1 if it succeeded, 0 otherwise
*In case of collision, add the new node at the beginning of the list.

4-hash_table_get.c - Writes a function that retrieves a value associated with a key.
*Returns the value associated with the element, or NULL if key couldn’t be found.

5-hash_table_print.c - Writes a function that prints a hash table.
*print the key/value in the order that they appear in the array of hash table;
Order: array, list.

6-hash_table_delete.c - Writes a function that deletes a hash table.

100-sorted_hash_table.c - Writes out an ordered Hashtable in PHP using a given Data structure.
