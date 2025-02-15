/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <edmatevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 16:40:52 by edmatevo          #+#    #+#             */
/*   Updated: 2025/02/14 15:13:10 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*str1;
	char	*str2;
	size_t	i;
	size_t	j;

	str1 = (char *)haystack;
	str2 = (char *)needle;
	if (*str2 == '\0')
		return (str1);
	i = 0;
	while (str1[i] && i < len)
	{
		j = 0;
		while (str1[i + j] && str2[j] && (i + j) < len && str1[i
				+ j] == str2[j])
			j++;
		if (str2[j] == '\0')
			return (str1 + i);
		i++;
	}
	return (NULL);
}
