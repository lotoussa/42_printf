/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_remove_if.c                               .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 13:33:09 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/11 13:33:09 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lst_remove_if(t_list **alst, void *data_ref, int (*cmp)())
{
	t_list *tmp;
	t_list *list;

	tmp = NULL;
	if (alst)
	{
		tmp = *alst;
		while (tmp && (*cmp)(tmp->content, data_ref) == 0)
		{
			*alst = tmp->next;
			free(tmp);
			tmp = *alst;
		}
	}
	while (tmp && (*cmp)(tmp->content, data_ref))
	{
		list = tmp;
		tmp = tmp->next;
	}
	if (tmp)
	{
		list->next = tmp->next;
		free(tmp);
		tmp = list->next;
	}
}
