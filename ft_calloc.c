#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

    if (nmemb == 0 || size == 0) {
        return (malloc(1));
    }
	ptr = malloc((nmemb * size));
	if (!ptr)
		return (NULL);
    ft_memset(ptr, 0, (nmemb * size));
	return (ptr);
}
