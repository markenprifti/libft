#include "../libft.h"
#include "test_libft.h"

void	test_ft_isalpha(void)
{
	printf("Test ft_isalpha: %d\n", ft_isalpha('A'));
}

void	test_ft_isdigit(void)
{
	printf("Test ft_isdigit: %d\n", ft_isdigit('4'));
}

void	test_ft_isalnum(void)
{
	printf("Test ft_isalnum: %d\n", ft_isalnum('9'));
}

void	test_ft_isascii(void)
{
	printf("Test ft_isascii: %d\n", ft_isascii(128));
}

void	test_ft_isprint(void)
{
	printf("Test ft_isprint: %d\n", ft_isprint('\n'));
}

void	test_ft_strlen(void)
{
	printf("Test ft_strlen: %zu\n", ft_strlen("Hello"));
}

void	test_ft_memset(void)
{
	char str[10] = "abcdef";
	ft_memset(str, 'X', 3);
	printf("Test ft_memset: %s\n", str);
}

void	test_ft_bzero(void)
{
	char str[6] = "Hello";
	ft_bzero(str, 3);
	printf("Test ft_bzero: %s\n", str);
}

void	test_ft_memcpy(void)
{
	char dst[10];
	ft_memcpy(dst, "Hello", 6);
	printf("Test ft_memcpy: %s\n", dst);
}

void	test_ft_memmove(void)
{
	char str[] = "abcdef";
	ft_memmove(str + 2, str, 4);
	printf("Test ft_memmove: %s\n", str);
}

void	test_ft_strlcpy(void)
{
	char dst[5];
	ft_strlcpy(dst, "abcdef", 5);
	printf("Test ft_strlcpy: %s\n", dst);
}

void	test_ft_strlcat(void)
{
	char dst[20] = "Hello";
	ft_strlcat(dst, " World", 20);
	printf("Test ft_strlcat: %s\n", dst);
}

void	test_ft_toupper(void)
{
	printf("Test ft_toupper: %c\n", ft_toupper('a'));
}

void	test_ft_tolower(void)
{
	printf("Test ft_tolower: %c\n", ft_tolower('Z'));
}

void	test_ft_strchr(void)
{
	printf("Test ft_strchr: %s\n", ft_strchr("Hello", 'l'));
}

void	test_ft_strrchr(void)
{
	printf("Test ft_strrchr: %s\n", ft_strrchr("Hello", 'l'));
}

void	test_ft_strncmp(void)
{
	printf("Test ft_strncmp: %d\n", ft_strncmp("abc", "abd", 3));
}

void	test_ft_memchr(void)
{
	printf("Test ft_memchr: %s\n", (char *)ft_memchr("hello", 'l', 5));
}

void	test_ft_memcmp(void)
{
	printf("Test ft_memcmp: %d\n", ft_memcmp("abc", "abc", 3));
}

void	test_ft_strnstr(void)
{
	char *res = ft_strnstr("Hello World", "World", 11);
	printf("Test ft_strnstr: %s\n", res ? res : "NULL");
}

void	test_ft_atoi(void)
{
	printf("Test ft_atoi: %d\n", ft_atoi("   -42"));
}

void	test_ft_calloc(void)
{
	int *arr = (int *)ft_calloc(5, sizeof(int));
	if (!arr)
		return ;
	printf("Test ft_calloc: ");
	for (int i = 0; i < 5; i++)
		printf("%d ", arr[i]);
	printf("\n");
	free(arr);
}

void	test_ft_strdup(void)
{
	char *res = ft_strdup("Libft");
	printf("Test ft_strdup: %s\n", res ? res : "NULL");
	free(res);
}