/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edmatevo <edmatevo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 14:26:15 by edmatevo          #+#    #+#             */
/*   Updated: 2025/02/14 15:44:00 by edmatevo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

// struct		example
// {
// 	void	*x;
// 	char	y;
// 	int		t;
// 	void	*z;
// };

// int	main(void)
// {
// 	struct example *m;
// 	printf("%lu", sizeof(struct example));
// 	m->y = 5;
// 	return (0);
// }