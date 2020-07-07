/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdelone.c                                   .::    .:/ .      .::   */
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

void	ft_lstdelone(t_list **alst, void (*del) (void *, size_t))
{
	t_list	*tmp;

	tmp = *alst;
	if (tmp)
	{
		del(tmp->content, tmp->content_size);
		free(*alst);
		*alst = NULL;
	}
}
