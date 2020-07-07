/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_s.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 10:53:50 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 23:21:23 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

static char		*pf_zero_str(char *str, t_flags *flags)
{
	if (!(str = ft_strdup("")))
		return (NULL);
	str = pf_string_prec(str, flags);
	str = pf_string_width(str, flags);
	return (str);
}

char			*pf_s(va_list ap, t_flags *flags)
{
	char	*str;

	if (flags->modif == l)
		return (pf_upper_s(ap, flags));
	str = va_arg(ap, char*);
	if (!str && flags->prec == 1)
		return (pf_zero_str(str, flags));
	if (!str)
		return (ft_strdup("(null)"));
	if (!(str = ft_strdup(str)))
		return (NULL);
	str = pf_string_prec(str, flags);
	str = pf_string_width(str, flags);
	return (str);
}
