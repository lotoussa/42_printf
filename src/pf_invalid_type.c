/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_invalid_type.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/16 21:09:56 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/17 18:35:23 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char		*pf_invalid_type(t_flags *flags, char c)
{
	char	*str;

	str = ft_memalloc(2);
	if (flags->less == 1)
		str[0] = c;
	if (flags->less != 1)
		flags->width--;
	str = pf_string_prec(str, flags);
	str = pf_string_width(str, flags);
	return (str);
}
