/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mprifti <mprifti@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:11:19 by mprifti           #+#    #+#             */
/*   Updated: 2026/04/23 14:26:03 by mprifti          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (n != 0 && size > SIZE_MAX / n)
		return (NULL);
	ptr = malloc((n * size));
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, (n * size));
	return (ptr);
}
