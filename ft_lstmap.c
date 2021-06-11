/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:42:40 by rnishimu          #+#    #+#             */
/*   Updated: 2021/06/07 14:42:40 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list	*lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	void	*temp;

	if (lst || f || del)
	{
		head = 0;
		while (lst)
		{
			temp = f(lst->content);
			new = ft_lstnew(temp);
			if (new == NULL)
			{
				ft_lstclear(&head, del);
				head = NULL;
			}
			ft_lstadd_back(&head, new);
			lst = lst->next;
		}
	}
	new = NULL;
	return (head);
}
