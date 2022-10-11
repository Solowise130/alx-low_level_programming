This project focuses on C - structures, it's applicability, implication and how to use them. It also covers the use of "typedef" in C.

0 - Defines a  new type struct dog with the following elements:
i) name, type = char *
ii) age, type = float
iii) owner, type = char *

1 - Writes a function that initialize a variable of type struct dog using the prototype;
    void init_dog(struct dog *d, char *name, float age, char *owner);

2 - Writes a function that prints a struct dog, using the prototype;
    void print_dog(struct dog *d);

3 - Defines a new type dog_t as a new name for the type struct dog.

4 - Writes a function that creates a new dog, using the prototype;
    dog_t *new_dog(char *name, float age, char *owner);
    It stores a copy of name and owner and returns NULL if the function fails.

5 - Writes a function that frees dogs using the prototype;
    void free_dog(dog_t *d);
