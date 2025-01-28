/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 14:51:45 by edmatevo          #+#    #+#             */
/*   Updated: 2025/01/28 20:48:35 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *ptr1;
	unsigned char *ptr2;
	size_t i;

	ptr1 = (unsigned char*)dst;
	ptr2 = (unsigned char*)src;

	if (!dst && !src)
		return (NULL);
	if (dst <= src)
	{
		i = 0;
		while (i < len)
		{
			ptr1[i] = ptr2[i];
			i++;
		}
	}
	else 
	{
		ptr1 = ptr1 + len - 1;
		ptr2 = ptr2 + len - 1;

		while(len--)
		{
			*ptr1-- = *ptr2--;
		}
	}
	return(dst);
}
