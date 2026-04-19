#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dsize)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	if (dsize <= d_len)  // kontroll per te pare nqs dst eshte e mbushur apo jo
		return (dsize + s_len);
	i = 0;
	while (src[i] && (d_len + i) < (dsize - 1))
	{
		dst[d_len + i] = src[i];
		i++;
	}
	dst[d_len + i] = '\0';
	return (d_len + s_len);
}
