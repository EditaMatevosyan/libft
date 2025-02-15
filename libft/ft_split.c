/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <edmatevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:07:23 by edmatevo          #+#    #+#             */
/*   Updated: 2025/02/14 15:00:57 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	count;

	count = 0;
	if (!s)
		return (0);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

char	*allocate_word(char *s, int len)
{
	char	*str;
	int		i;

	i = 0;
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s[i];
		i++;
	}
	str[len] = '\0';
	return (str);
}

void	free_memory(char **str, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(str[i]);
		i++;
	}
	free(str);
}

int	split_string(char **arr, char *s, char c)
{
	int	i;
	int	word_len;

	i = 0;
	word_len = 0;
	while (*s)
	{
		if ((s[word_len] == c || s[word_len] == '\0') && word_len)
		{
			arr[i] = allocate_word(s, word_len);
			if (!arr[i])
			{
				free_memory(arr, i);
				return (0);
			}
			s += word_len;
			word_len = 0;
			i++;
		}
		else if (s[word_len] != c && s[word_len] != '\0')
			word_len++;
		else
			s++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**str;

	if (!s)
		return (NULL);
	count = word_count(s, c);
	str = (char **)malloc((count + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	if (!split_string(str, (char *)s, c))
		return (0);
	str[count] = NULL;
	return (str);
}

// #include <stdio.h>

// int main()
// {
//     char *str = "Hello,world,this,is,C";
//     char delim = ',';

//     char **result = ft_split(str, delim);

//     if (!result)
//     {
//         printf("Memory allocation failed.\n");
//         return (1);
//     }

//     for (int i = 0; result[i]; i++)
//         printf("%s\n", result[i]);

//     return (0);
// }
