/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_upper_d.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 13:03:20 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 03:59:04 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*pf_upper_d(va_list ap, t_flags *flags)
{
	long	n;
	char	*str;

	n = va_arg(ap, long);
	if (flags->modif == j)
		n = (int)n;
	else if (flags->modif == h && n != 65535)
		n = (short)n;
	else if (flags->modif == hh && n != 65535)
		n = (signed char)n;
	if (!(str = pf_litoa_base(n, "0123456789")))
		return (NULL);
	if (!(str = pf_number(str, flags, ap)))
		return (NULL);
	return (str);
}
