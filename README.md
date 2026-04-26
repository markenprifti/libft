<p align="center"><i><b>This activity has been created as part of the 42 curriculum by mprifti(Marken Prifti).</b></i></p>

# Libft


* [Description](#description)
* [Part_1](#part_1)
* [Part_2](#part_2)
* [Part_3](#part_3)
* [Instructions](#instructions)
* [Resources](#resources)
* [Testing](#tests) 

## Description  
The aim of this is to code a C library regrouping usual functions.
* **First part:** re-code a set of the libc functions, as defined in their man, with the same prototype and behaviors as the originals.
* **Second part:** code a set of functions that are either not included in the libc, or included in a different form.
* **Third part:** code functions to manipulate linked lists.

### Part_1

**ctype.h** 

| Function | Description |
| --- | --- |
| **ft\_isalpha** |checks for an alphabetic character.|
| **ft\_isdigit** | checks for a digit (0 through 9).|
| **ft\_isalnum** | checks for an alphanumeric character; it  is  equivalent  to (isalpha(c) || isdigit(c)).|
| **ft\_isascii** | checks  whether  c  is a 7-bit unsigned char value that fits into the ASCII character set. |
| **ft\_isprint** | checks for any printable character including space.|
| **ft\_toupper** | convert lowercase letters to uppercase|
| **ft\_tolower** | convert uppercase letters to lowercase. |


**string.h**

| Function | Description |
| --- | --- |
| **ft\_strlen** | The ft\_strlen() function computes and returns the length of the string s.|
| **ft\_memset** | Fills the first n bytes of the memory area pointed to by s with the constant byte c|
| **ft\_memcpy** | Copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use  memmove(3)  if the memory areas do overlap.
| **ft\_memmove** | Copies n bytes from memory area src to memory area dest. The two strings may overlap; the copy is always done in a non-destructive manner.|
| **ft\_strchr** | Returns a pointer to the first occurrence of the character c in the string s.|
| **ft\_strrchr** | Returns a pointer to the last occurrence  of the character c in the string s.|
| **ft\_strncmp** | Lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2. Compares not more than n characters. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| **ft\_memchr** |Scans the initial n bytes of the memory area pointed to by s for the first instance of c.|
| **ft\_memcmp** | Function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.|
| **ft\_strdup** | Returns a pointer to a new string which is a duplicate  of  the string s.|
| **ft\_strnstr** | Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.|


**strings.h**

| Function | Description |
| --- | --- |
| **ft\_bzero** | Is a function that sets a block of memory to zero. |


**stdlib.h**  

| Function | Description |
| --- | --- |
| **ft\_atoi** | Converts the initial portion of the string pointed to by str to int representation and returns the int. |
| **ft\_calloc** | Allocates memory for an array of  nmemb  elements  of  size  bytes  each and returns a pointer to the allocated memory. The memory is set to zero.|


**No standart functions**

| Function | Description |
| --- | --- |
| **ft\_strlcpy** | Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.|
| **ft\_strlcat** | Appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.|


### Part_2

**string creation/manipulation**

| Function | Description |
| --- | --- |
| **ft\_substr** | Allocates and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.|
| **ft\_strjoin** | Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.|
| **ft\_strtrim** | Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.|
| **ft\_split** | Allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.|


**string conversion**

| Function | Description |
| --- | --- |
| **ft\_itoa** | Allocates and returns a string representing the integer received as an argument. Negative numbers must be handled.|


**string iteration**
| Function | Description |
| --- | --- |
| **ft\_strmapi** | Applies the function ’f’ to each character of the string ’s’ to create a new string resulting from successive applications of ’f’.|
| **ft\_striteri** | Applies a function to each character of a string, modifying the string in place. |


**file-descriptor's functions**

| Function | Description |
| --- | --- |
| **ft\_putchar\_fd** | Outputs the character ’c’ to the given file descriptor.|
| **ft\_putstr\_fd** | Outputs the string ’s’ to the given file descriptor.|
| **ft\_putendl\_fd** | Outputs the string ’s’ to the given file descriptor, followed by a newline.|
| **ft\_putnbr\_fd** | Outputs the integer ’n’ to the given file descriptor.|


### Part_3

**Node creation**

| Function | Description |
| --- | --- |
| **ft\_lstnew** | Allocates and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.|

**Node insertion**

| Function | Description |
| --- | --- |
| **ft\_lstadd_front** | Adds the element ’new’ at the beginning of the list.|
| **ft\_lstadd_back** | Adds the element ’new’ at the end of the list.|

**Node information**

| Function | Description |
| --- | --- |
| **ft\_lstsize** | Counts the number of elements in a list.|
| **ft\_lstlast** | Returns the last element of the list.|

**Node deletion**

| Function | Description |
| --- | --- |
| **ft\_lstdelone** | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element.|
| **ft\_lstclear** | Deletes and frees the given element and every successor of that element, using the function ’del’ and free. Finally, the pointer to the list is set to NULL.|

**Node iteration**

| Function | Description |
| --- | --- |
| **ft\_lstiter** | Iterates the list ’lst’ and applies the function ’f’ to the content of each element.|

**Node mapping**

| Function | Description |
| --- | --- |
| **ft\_lstmap** | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.|

## Instructions

### Compilation
To compile the library, run:

```bash
make
```

This  will generate the `libft.a` static library.

To remove object files,run:
```bash
make clean
```

To remove all compiled files including the library,run:
```bash
make fclean
```

To recompile everything from scratch,run:
```bash
make re
```

## Resources

### References

- [GNU manual](https://www.gnu.org/software/libc/manual/)
- Various online C library documentation, articles and youtube.

These resources were used to understand the behavior and implementation details of standard C library functions, especially string and memory functions.


## Tests
   
### By_me

1. You need to download [libft_test_main.c](https://github.com/mprifti42tech/libft_test_main). and 
2. Put the downloaded file it in the root folder of the project.
3. Read the [instructions](#instructions).

### By_others

* [Libftest](https://github.com/jtoty/Libftest)
* [libft Unit tests](https://github.com/alelievr/libft-unit-test)
* [libft-war-machine](https://github.com/ska42/libft-war-machine)
* [libftTester](https://github.com/Tripouille/libftTester)
