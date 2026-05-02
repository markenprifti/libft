*This activity has been created as part of the 42 curriculum by Marken Prifti.*

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
| [**ft\_isalpha**](https://github.com/markenprifti/libft/blob/main/ft_isalpha.c) |checks for an alphabetic character.|
| [**ft\_isdigit**](https://github.com/markenprifti/libft/blob/main/ft_isdigit.c) | checks for a digit (0 through 9).|
| [**ft\_isalnum**](https://github.com/markenprifti/libft/blob/main/ft_isalnum.c) | checks for an alphanumeric character; it  is  equivalent  to (isalpha(c) || isdigit(c)).|
| [**ft\_isascii**](https://github.com/markenprifti/libft/blob/main/ft_isascii.c) | checks  whether  c  is a 7-bit unsigned char value that fits into the ASCII character set. |
| [**ft\_isprint**](https://github.com/markenprifti/libft/blob/main/ft_isprint.c) | checks for any printable character including space.|
| [**ft\_toupper**](https://github.com/markenprifti/libft/blob/main/ft_toupper.c) | convert lowercase letters to uppercase|
| [**ft\_tolower**](https://github.com/markenprifti/libft/blob/main/ft_tolower.c) | convert uppercase letters to lowercase. |


**string.h**

| Function | Description |
| --- | --- |
| [**ft\_strlen**](https://github.com/markenprifti/libft/blob/main/ft_strlen.c) | The ft\_strlen() function computes and returns the length of the string s.|
| [**ft\_memset**](https://github.com/markenprifti/libft/blob/main/ft_memset.c) | Fills the first n bytes of the memory area pointed to by s with the constant byte c|
| [**ft\_memcpy**](https://github.com/markenprifti/libft/blob/main/ft_memcpy.c) | Copies n bytes from memory area src to memory area dest.  The memory areas must not overlap.  Use  memmove(3)  if the memory areas do overlap.
| [**ft\_memmove**](https://github.com/markenprifti/libft/blob/main/ft_memmove.c) | Copies n bytes from memory area src to memory area dest. The two strings may overlap; the copy is always done in a non-destructive manner.|
| [**ft\_strchr**](https://github.com/markenprifti/libft/blob/main/ft_strchr.c) | Returns a pointer to the first occurrence of the character c in the string s.|
| [**ft\_strrchr**](https://github.com/markenprifti/libft/blob/main/ft_strrchr.c) | Returns a pointer to the last occurrence  of the character c in the string s.|
| [**ft\_strncmp**](https://github.com/markenprifti/libft/blob/main/ft_strncmp.c) | Lexicographically compares the null-terminated strings s1 and s2. Returns an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2. Compares not more than n characters. The comparison is done using unsigned characters, so that '\200' is greater than '\0'.|
| [**ft\_memchr**](https://github.com/markenprifti/libft/blob/main/ft_memchr.c) |Scans the initial n bytes of the memory area pointed to by s for the first instance of c.|
| [**ft\_memcmp**](https://github.com/markenprifti/libft/blob/main/ft_memcmp.c) | Function compares the first n bytes (each interpreted as unsigned char) of the memory areas s1 and s2.|
| [**ft\_strdup**](https://github.com/markenprifti/libft/blob/main/ft_strdup.c) | Returns a pointer to a new string which is a duplicate  of  the string s.|
| [**ft\_strnstr**](https://github.com/markenprifti/libft/blob/main/ft_strnstr.c) | Locates the first occurrence of the null-terminated string little in the string big, where not more than len characters are searched.|


**strings.h**

| Function | Description |
| --- | --- |
| [**ft\_bzero**](https://github.com/markenprifti/libft/blob/main/ft_bzero.c) | Is a function that sets a block of memory to zero. |


**stdlib.h**  

| Function | Description |
| --- | --- |
| [**ft\_atoi**](https://github.com/markenprifti/libft/blob/main/ft_atoi.c)| Converts the initial portion of the string pointed to by str to int representation and returns the int. |
| [**ft\_calloc**](https://github.com/markenprifti/libft/blob/main/ft_calloc.c) | Allocates memory for an array of  nmemb  elements  of  size  bytes  each and returns a pointer to the allocated memory. The memory is set to zero.|


**No standart functions**

| Function | Description |
| --- | --- |
| [**ft\_strlcpy**](https://github.com/markenprifti/libft/blob/main/ft_strlcpy.c) | Copies up to size - 1 characters from the NUL-terminated string src to dst, NUL-terminating the result.|
| [**ft\_strlcat**](https://github.com/markenprifti/libft/blob/main/ft_strlcat.c) | Appends the NUL-terminated string src to the end of dst.  It will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result.|


### Part_2

**string creation/manipulation**

| Function | Description |
| --- | --- |
| [**ft\_substr**](https://github.com/markenprifti/libft/blob/main/ft_substr.c) | Allocates and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.|
| [**ft\_strjoin**](https://github.com/markenprifti/libft/blob/main/ft_strjoin.c) | Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.|
| [**ft\_strtrim**](https://github.com/markenprifti/libft/blob/main/ft_strtrim.c) | Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.|
| [**ft\_split**](https://github.com/markenprifti/libft/blob/main/ft_split.c) | Allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.|


**string conversion**

| Function | Description |
| --- | --- |
| [**ft\_itoa**](https://github.com/markenprifti/libft/blob/main/ft_itoa.c) | Allocates and returns a string representing the integer received as an argument. Negative numbers must be handled.|


**string iteration**
| Function | Description |
| --- | --- |
| [**ft\_strmapi**](https://github.com/markenprifti/libft/blob/main/ft_strmapi.c) | Applies the function ’f’ to each character of the string ’s’ to create a new string resulting from successive applications of ’f’.|
| [**ft\_striteri**](https://github.com/markenprifti/libft/blob/main/ft_striteri.c) | Applies a function to each character of a string, modifying the string in place. |


**file-descriptor's functions**

| Function | Description |
| --- | --- |
| [**ft\_putchar\_fd**](https://github.com/markenprifti/libft/blob/main/ft_putchar_fd.c) | Outputs the character ’c’ to the given file descriptor.|
| [**ft\_putstr\_fd**](https://github.com/markenprifti/libft/blob/main/ft_putstr_fd.c) | Outputs the string ’s’ to the given file descriptor.|
| [**ft\_putendl\_fd**](https://github.com/markenprifti/libft/blob/main/ft_putendl_fd.c) | Outputs the string ’s’ to the given file descriptor, followed by a newline.|
| [**ft\_putnbr\_fd**](https://github.com/markenprifti/libft/blob/main/ft_putnbr_fd.c) | Outputs the integer ’n’ to the given file descriptor.|


### Part_3

**Node creation**

| Function | Description |
| --- | --- |
| [**ft\_lstnew**](https://github.com/markenprifti/libft/blob/main/ft_lstnew.c) | Allocates and returns a new element. The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.|

**Node insertion**

| Function | Description |
| --- | --- |
| [**ft\_lstadd_front**](https://github.com/markenprifti/libft/blob/main/ft_lstadd_back.c) | Adds the element ’new’ at the beginning of the list.|
| [**ft\_lstadd_back**](https://github.com/markenprifti/libft/blob/main/ft_lstadd_back.c) | Adds the element ’new’ at the end of the list.|

**Node information**

| Function | Description |
| --- | --- |
| [**ft\_lstsize**](https://github.com/markenprifti/libft/blob/main/ft_lstsize.c) | Counts the number of elements in a list.|
| [**ft\_lstlast**](https://github.com/markenprifti/libft/blob/main/ft_lstlast.c) | Returns the last element of the list.|

**Node deletion**

| Function | Description |
| --- | --- |
| [**ft\_lstdelone**](https://github.com/markenprifti/libft/blob/main/ft_lstdelone.c) | Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element.|
| [**ft\_lstclear**](https://github.com/markenprifti/libft/blob/main/ft_lstclear.c) | Deletes and frees the given element and every successor of that element, using the function ’del’ and free. Finally, the pointer to the list is set to NULL.|

**Node iteration**

| Function | Description |
| --- | --- |
| [**ft\_lstiter**](https://github.com/markenprifti/libft/blob/main/ft_lstiter.c) | Iterates the list ’lst’ and applies the function ’f’ to the content of each element.|

**Node mapping**

| Function | Description |
| --- | --- |
| [**ft\_lstmap**](https://github.com/markenprifti/libft/blob/main/ft_lstmap.c) | Iterates the list ’lst’ and applies the function ’f’ to the content of each element. Creates a new list resulting of the successive applications of the function ’f’. The ’del’ function is used to delete the content of an element if needed.|

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

You need to be in the root folder of this project.
1. Create the library `libft.a` with:
```bash
make
```
2. Run: 
```bash 
cc main.c test/part_1_test.c test/part_2_test.c test/part_3_test.c libft.a
```

### By_others

* [Libftest](https://github.com/jtoty/Libftest)
* [libftTester](https://github.com/Tripouille/libftTester)
