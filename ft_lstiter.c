/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishimu <rnishimu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 14:33:41 by rnishimu          #+#    #+#             */
/*   Updated: 2021/06/07 14:33:41 by rnishimu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list	*lst, void (*f)(void	*))
{
	t_list	*temp;

	temp = lst;
	if (lst != NULL || f != NULL)
	{
		while (temp != NULL)
		{
			f(temp->content);
			temp = temp->next;
		}
	}
}
