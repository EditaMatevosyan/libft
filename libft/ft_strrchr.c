/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 19:38:20 by edmatevo          #+#    #+#             */
/*   Updated: 2025/01/28 20:05:07 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	size_t	i;

	i = ft_strlen(s);
	ptr = (char *)s + i - 1;
	if(c == '\0')
		return(++ptr);
	while(i != 0)
	{
		if(*ptr == (char)c)
			return(ptr);
		ptr--;
		i--;
	}
	return(NULL);
}
