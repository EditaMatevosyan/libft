/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 13:59:19 by edmatevo          #+#    #+#             */
/*   Updated: 2025/01/31 18:23:22 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	num;
	int	sign;

	num = 0;
	sign = 1;
	while (*str && ((*str >= 9 && *str <= 13) || *str == ' '))
		str++;
	if (*str == '+')
		str++;
	else if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	while (*str && (*str >= '0' && *str <= '9'))
	{
		num = (num * 10) + (*str - 48);
		str++;
	}
	return (sign * num);
}
