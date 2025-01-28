/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:08:26 by edmatevo          #+#    #+#             */
/*   Updated: 2025/01/22 16:36:25 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
	size_t	i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char*)s;
	while(i < n)
	{
		p[i] = 0;
		i++;
	}
}

#include <stdio.h>

int main()
{
	int arr[5] = {1, 2, 3, 4, 5};
	ft_bzero(arr, 12);

	int i = 0;
	while(i < 5)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	return 0;
}
