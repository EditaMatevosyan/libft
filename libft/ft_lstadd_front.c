/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <edmatevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 15:45:12 by edmatevo          #+#    #+#             */
/*   Updated: 2025/02/14 18:25:21 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
    new->next = *lst;
    *lst = new;
}