/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 14:13:28 by edmatevo          #+#    #+#             */
/*   Updated: 2025/01/28 20:34:44 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char	*cptr;
	size_t	i;

	i = 0;
	cptr = (unsigned char*)b;
	while(i < len)
	{
		cptr[i] = c;
		i++;
	}
	return(b);
}
