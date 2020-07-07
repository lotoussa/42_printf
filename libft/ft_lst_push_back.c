/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_push_back.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 13:33:08 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/11 13:33:08 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_push_back(t_list **alst, void *content, size_t content_size)
{
	t_list	*tmp;
	t_list	*list;

	tmp = ft_lstnew(content, content_size);
	list = *alst;
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = tmp;
	}
	else
		*alst = tmp;
}
