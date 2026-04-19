#include "libft.h"
#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isdigit('4'));
	printf("%d\n", ft_isalpha('g'));
	printf("%d\n", ft_isascii('s'));
	printf("%d\n", ft_isprint('%'));


    // ft_bzero ft_memcpy ft_memmove ft_memset ft_strlen
    char str[] = "abcdef";
    ft_memmove(str + 2, str, 4);
    printf("%s\n", str);
    char dest[] = "012345";
    ft_memcpy(dest, str, 5);
    printf("memcpy: %s\n", dest);
    ft_memset(dest, 63, 3);
    printf("memset: %s\n", dest);
    // ----------------------------
    char bzerotest[] = "qwerty";
    ft_bzero(bzerotest, 3);
    printf("ft_bzero: %s\n", bzerotest); // nuk do shfaqi gje sepse fillon me '\0' dhe kjo ben qe printf te nderpritet.
    // ---------------------------
    // strlcat, strlcpy
    char dst[20] = "Hello";
    char src[] = " World";
    ft_strlcat(dst, src, sizeof(dst));
    printf("strlcat: %s\n", dst);
    char dst2[5];
    ft_strlcpy(dst2, "abcdef", 5);
    printf("strlcpy: %s\n", dst2);

    // ft_toupper, ft_tolower
    printf("toupper: %c\n", ft_toupper('a'));
    printf("toupper: %c\n", ft_tolower('A'));

    // ft_strchr, ft_strrchr
    char str3[] = "Hello World";
    printf("ft_strchr: %s\n", ft_strchr(str3, 'o'));
    printf("ft_strrchr: %s\n", ft_strrchr(str3, 'o'));

    //ft_strncmp, ft_memchr, ft_memcmp
    printf("ft_strncmp: %d\n", ft_strncmp("abc", "abd", 3));
    printf("ft_memchr: %s\n", (char *)ft_memchr("hello", 'l', 5));
    printf("ft_memcmp: %d\n", ft_memcmp("abc", "abc", 3));

    //ft_atoi
    printf("ft_atoi: %d\n", ft_atoi("   -42"));

    // ft_strnstr
    const char *haystack = "Hello World";
    const char *needle = "World";

    char *res = ft_strnstr(haystack, needle, sizeof(int));
    if(res)
        printf("ft_strnstr: %s\n", res);
    else
        printf("NULL");

    // ft_calloc
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr) {
        printf("ft_calloc: ");
        for (int i = 0; i < 5; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        free(arr);
    }

    // ft_strdup
    char *dup = ft_strdup("Libft");
    if (dup) {
        printf("ft_strdup: %s\n", dup);
        free(dup);
    }

}
