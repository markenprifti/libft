#include "libft.h"
#include <stdio.h>

int	main(void)
{
	// ft_memmove
	char	str[] = "abcdef";

	// ft_strlcpy && ft_strlcat
	char	dst[20] = "Hello";
	char	src[] = " World";

	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isdigit('4'));
	printf("%d\n", ft_isalnum('9'));
	printf("%d\n", ft_isascii(128));
	printf("%d\n", ft_isprint('\n'));
	ft_memmove(str + 2, str, 4);
	printf("%s\n", str);

	ft_strlcat(dst, src, 20);
	printf("%s\n", dst);

	char	dst2[5];
	ft_strlcpy(dst2, "abcdef", 5);
	printf("%s\n", dst2);

    // ft_toupper && ft_tolower
    printf("%c\n", ft_toupper('a'));
    printf("%c\n", ft_tolower('Z'));

    // ft_strchr && ft_strrchr
    char str3[] = "Hello World";
    printf("%s\n", ft_strchr(str3,'o'));
    printf("%s\n", ft_strrchr(str3, 'o'));

    // ft_strncmp && ft_memchr && ft_memcmp
    printf("%d\n", ft_strncmp("abc", "abd", 3));
    printf("%s\n", (char *)ft_memchr("hello", 'l', 5));
    printf("ft_memcmp: %d\n", ft_memcmp("abc", "abc", 3));

    //ft_strnstr
    const char *haystack = "Hello World";
    const char *needle = "World";

    char *res = ft_strnstr(haystack, needle, 11);
    if(res)
        printf("ft_strnstr: %s\n", res);
    else
        printf("NULL");

    // ft_atoi
    printf("ft_atoi: %d\n", ft_atoi("   -42"));

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
	return (0);
}
