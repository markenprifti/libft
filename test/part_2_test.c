#include "../libft.h"
#include "test_libft.h"

// helper për strmapi
static char	my_func(unsigned int i, char c)
{
	(void)i;
	return (c + 1);
}

// helper për striteri
static void	iter_func(unsigned int i, char *c)
{
	(void)i;
	*c = *c + 1;
}

void	test_ft_substr(void)
{
	char *res = ft_substr("Hello World", 6, 5);
	printf("Test ft_substr: %s\n", res);
	free(res);
}

void	test_ft_strjoin(void)
{
	char *res = ft_strjoin("Hello", " World");
	printf("Test ft_strjoin: %s\n", res);
	free(res);
}

void	test_ft_strtrim(void)
{
	char *res = ft_strtrim("   Hello   ", " ");
	printf("Test ft_strtrim: %s\n", res);
	free(res);
}

void	test_ft_split(void)
{
	char **res = ft_split("Hello World Split", ' ');
	printf("Test ft_split: ");
	for (int i = 0; res[i]; i++)
		printf("[%s] ", res[i]);
	printf("\n");

	for (int i = 0; res[i]; i++)
		free(res[i]);
	free(res);
}

void	test_ft_itoa(void)
{
	char *res = ft_itoa(-42);
	printf("Test ft_itoa: %s\n", res);
	free(res);
}

void	test_ft_strmapi(void)
{
	char *res = ft_strmapi("abc", my_func);
	printf("Test ft_strmapi: %s\n", res);
	free(res);
}

void	test_ft_striteri(void)
{
	char str[] = "abc";
	ft_striteri(str, iter_func);
	printf("Test ft_striteri: %s\n", str);
}

void	test_ft_putchar_fd(void)
{
	write(1, "Test ft_putchar_fd:\n", 21);
	ft_putchar_fd('A', 1);
	write(1, "\n", 1);
}

void	test_ft_putstr_fd(void)
{
	write(1, "Test ft_putstr_fd:\n", 20);
	ft_putstr_fd("Hello", 1);
	write(1, "\n", 1);
}

void	test_ft_putendl_fd(void)
{
	write(1, "Test ft_putendl_fd:\n", 21);
	ft_putendl_fd("Hello", 1);
}

void	test_ft_putnbr_fd(void)
{
	write(1, "Test ft_putnbr_fd:\n", 20);
	ft_putnbr_fd(42, 1);
	write(1, "\n", 1);
}