#include "../libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	slen;
	size_t	sublen;

	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen) // a eshte jashte kufijve
		return (ft_strdup(""));
	if (len > slen - start) // sa karaktere mund te kopjojme. pra nqs gjatesia e kerkuar eshte me e madhe se mbetja e gjatesise totale me vendodhjen
		sublen = slen - start; // sublen do behet me sa gjatesia e mbetur
	else
		sublen = len;
	sub = malloc(sublen + 1);
	if (!sub)
		return (NULL);
    ft_strlcpy(sub, s+start, sublen + 1);
    return (sub);
}
