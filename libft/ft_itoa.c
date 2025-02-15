/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <edmatevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 14:59:30 by edmatevo          #+#    #+#             */
/*   Updated: 2025/02/14 14:59:46 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(long long int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*int_to_char(char *s, long long int n, long long int len)
{
	s[len] = '\0';
	if (n == 0)
		s[0] = '0';
	else if (n < 0)
	{
		n *= -1;
		s[0] = '-';
	}
	while (n > 0)
	{
		s[--len] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = count((long long int)n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	int_to_char(str, n, len);
	return (str);
}

// #include <stdio.h>

// int main()
// {
//     printf("%s\n", ft_itoa(-2147483648));
//     return (0);
// }
