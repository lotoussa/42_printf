/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_upper_u.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 13:32:21 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 03:59:16 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*pf_upper_u(va_list ap, t_flags *flags)
{
	long	n;
	char	*str;

	flags->more = 0;
	n = va_arg(ap, unsigned long);
	if (!(str = pf_luitoa_base(n, "0123456789")))
		return (NULL);
	if (!(str = pf_number(str, flags, ap)))
		return (NULL);
	return (str);
}
