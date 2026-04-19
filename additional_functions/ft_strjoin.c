#include "../libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*reuslt;
	size_t	len;

	len = ft_strlen(s1) + ft_strlen(s2);
	reuslt = malloc(len + 1);
	if (!reuslt)
		return (NULL);
    ft_strlcpy(reuslt, s1, len + 1);
    ft_strlcat(reuslt, s2, len + 1);
    return (reuslt);
}
