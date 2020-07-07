/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_d.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 12:53:14 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 03:52:23 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*pf_d(va_list ap, t_flags *flags)
{
	long	n;
	char	*str;

	flags->ptype = d;
	n = va_arg(ap, long);
	if (n == 0 && flags->prec == 1 && (flags->size == 0 || flags->size == -1))
	{
		str = ft_strdup("");
		flags->width = (flags->width == -1 ? 0 : flags->width);
	}
	else
	{
		if (flags->modif == 0)
			n = (int)n;
		else if (flags->modif == h)
			n = (short)n;
		else if (flags->modif == hh)
			n = (signed char)n;
		if (!(str = pf_litoa_base(n, "0123456789")))
			return (NULL);
	}
	if (!(str = pf_number(str, flags, ap)))
		return (NULL);
	return (str);
}
