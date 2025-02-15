/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <edmatevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 15:11:45 by edmatevo          #+#    #+#             */
/*   Updated: 2025/02/15 16:34:40 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char    *str;
	int     i;
	int     start;
	int     end;

	if (!s1 || !set)
		return (NULL);
	if (*s1 == '\0')
		return (ft_strdup(""));
	start = 0;
	while (s1[start] && check(s1[start], set))
		start++;
	end = ft_strlen(s1) - 1;
	while (check(s1[end], set) && end >= start)
		end--;
	str = (char *)malloc(end - start + 2);
	if (!str)
		return (NULL);
	i = 0;
	while (start + i <= end)
	{
		str[i] = s1[start + i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
