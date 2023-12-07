/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:42:50 by jholland          #+#    #+#             */
/*   Updated: 2023/12/07 18:36:39 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_list;
	t_list	*next_list;

	if (!*lst)
		return ;
	current_list = *lst;
	while (current_list)
	{
		del(current_list->content);
		next_list = current_list->next;
		free(current_list);
		current_list = next_list;
	}
	*lst = NULL;
}
