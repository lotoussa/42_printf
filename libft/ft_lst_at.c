/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lst_at.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 13:33:08 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/11 13:33:08 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lst_at(t_list *alst, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	i = 0;
	if (!alst)
		return (NULL);
	tmp = alst;
	while (i < nbr)
	{
		if (!tmp->next)
			return (tmp);
		tmp = tmp->next;
		i++;
	}
	return (tmp);
}
