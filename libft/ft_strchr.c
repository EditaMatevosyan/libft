/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 15:18:37 by edmatevo          #+#    #+#             */
/*   Updated: 2025/01/28 17:19:03 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*ptr;

	ptr = (char*)s;
	while(*ptr)
	{
		if(*ptr == (char)c)
			return(ptr);
		ptr++;
	}
	if(*ptr == '\0' && c == '\0')
		return(ptr);
	return(NULL);
}
