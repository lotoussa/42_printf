/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_find.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 13:33:08 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/11 13:33:08 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_find(t_list *alst, void *data_ref, int (*cmp)())
{
	t_list	*tmp;

	tmp = alst;
	while (tmp)
	{
		if (cmp(tmp->content, data_ref) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (0);
}
