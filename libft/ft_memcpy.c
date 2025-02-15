/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <edmatevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:53:41 by edmatevo          #+#    #+#             */
/*   Updated: 2025/02/05 18:18:18 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*dst_t;
	const char	*src_t;

	i = 0;
	dst_t = dst;
	src_t = src;
	if (!dst && !src)
		return (dst);
	while (i < n)
	{
		dst_t[i] = src_t[i];
		i++;
	}
	return (dst);
}
