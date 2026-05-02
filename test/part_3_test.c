#include "../libft.h"
#include "test_libft.h"

// helper për delete
static void	del(void *content)
{
	free(content);
}

// helper për map
static void	*map_func(void *content)
{
	char *str = (char *)content;
	char *new = ft_strdup(str);
	return (new);
}

void	test_ft_lstnew(void)
{
	t_list *node = ft_lstnew(ft_strdup("node1"));
	printf("Test ft_lstnew: %s\n", (char *)node->content);
	free(node->content);
	free(node);
}

void	test_ft_lstadd_front(void)
{
	t_list *a = ft_lstnew(ft_strdup("A"));
	t_list *b = ft_lstnew(ft_strdup("B"));

	ft_lstadd_front(&a, b);

	printf("Test ft_lstadd_front: %s\n", (char *)a->content);

	ft_lstdelone(a, del);
}

void	test_ft_lstsize(void)
{
	t_list *a = ft_lstnew("A");
	t_list *b = ft_lstnew("B");

	a->next = b;

	printf("Test ft_lstsize: %d\n", ft_lstsize(a));

	free(b);
	free(a);
}

void	test_ft_lstlast(void)
{
	t_list *a = ft_lstnew("A");
	t_list *b = ft_lstnew("B");

	a->next = b;

	printf("Test ft_lstlast: %s\n", (char *)ft_lstlast(a)->content);

	free(b);
	free(a);
}

void	test_ft_lstadd_back(void)
{
	t_list *a = ft_lstnew(ft_strdup("A"));
	t_list *b = ft_lstnew(ft_strdup("B"));

	ft_lstadd_back(&a, b);

	printf("Test ft_lstadd_back: %s\n", (char *)a->next->content);

	ft_lstclear(&a, del);
}

void	test_ft_lstdelone(void)
{
	t_list *a = ft_lstnew(ft_strdup("A"));

	ft_lstdelone(a, del);
	printf("Test ft_lstdelone: OK\n");
}

void	test_ft_lstclear(void)
{
	t_list *a = ft_lstnew(ft_strdup("A"));
	t_list *b = ft_lstnew(ft_strdup("B"));

	a->next = b;

	ft_lstclear(&a, del);
	printf("Test ft_lstclear: OK\n");
}

void	test_ft_lstiter(void)
{
	t_list *a = ft_lstnew(ft_strdup("A"));
	t_list *b = ft_lstnew(ft_strdup("B"));

	a->next = b;

	ft_lstiter(a, del);
	printf("Test ft_lstiter: OK\n");

	free(a);
	free(b);
}

void	test_ft_lstmap(void)
{
	t_list *a = ft_lstnew(ft_strdup("A"));
	t_list *b = ft_lstnew(ft_strdup("B"));

	a->next = b;

	t_list *new = ft_lstmap(a, map_func, del);

	printf("Test ft_lstmap: %s\n", (char *)new->content);

	ft_lstclear(&new, del);
	ft_lstclear(&a, del);
}