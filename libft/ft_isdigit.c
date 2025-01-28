/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 16:23:30 by edmatevo          #+#    #+#             */
/*   Updated: 2025/01/22 16:47:22 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isdigit(int c)
{
	if(c >= '0' && c <= '9')
		return 1;
	return 0;
}

/*#include <stdio.h>

int main()
{
	char c = '5';
	char n = 'a';
	printf("%d\n", ft_isdigit(c));
	printf("%d", ft_isdigit(n));
}*/
