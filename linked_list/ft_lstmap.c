#include "../libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list *new_lst;
    t_list *node;

    if (!lst || !f || !del)
        return (NULL);
    new_lst = NULL;
    while (lst)
    {
        node = ft_lstnew(f(lst -> content));
        if (!node)
        {
            ft_lstclear(&new_lst, del);
            return (NULL);
        }
        ft_lstadd_back(&new_lst, node);
        lst = lst -> next;
    }
    return (new_lst);
}