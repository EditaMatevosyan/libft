/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:30:01 by edmatevo          #+#    #+#             */
/*   Updated: 2025/01/22 16:44:57 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isalpha(int c)
{
	if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return 1;
	return 0;
}

/*#include <stdio.h>

int main()
{
	char c = 5;
	char n = 'a';
	printf("%d\n", ft_isalpha(c));
	printf("%d", ft_isalpha(n));
}*/
