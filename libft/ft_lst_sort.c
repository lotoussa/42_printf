/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_sort.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 13:33:09 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/11 13:33:09 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lst_sort(t_list **alst, int (*cmp)())
{
	t_list	*tmp;
	t_list	*swap;

	tmp = *alst;
	while (tmp->next)
	{
		if (cmp(tmp, tmp->next) > 0)
		{
			swap = tmp;
			tmp = tmp->next;
			tmp->next = swap;
			tmp = *alst;
		}
		else
			tmp = tmp->next;
	}
}
