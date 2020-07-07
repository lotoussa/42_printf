/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_upper_c.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 15:23:05 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 11:12:58 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*pf_upper_c(va_list ap, t_flags *flags)
{
	int		i;

	(void)flags;
	i = va_arg(ap, int);
	flags->ptype = c;
	return (pf_unicode(i));
}
