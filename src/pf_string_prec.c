/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_string_prec.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/14 16:59:26 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 16:32:39 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*pf_string_prec(char *str, t_flags *flags)
{
	char	*tmp;

	if (flags->prec != 1)
		return (str);
	if (flags->size == -1)
		flags->size = 0;
	if (flags->size > (int)ft_strlen(str))
		flags->size = ft_strlen(str);
	while (128 <= (unsigned char)str[flags->size] &&
			(unsigned char)str[flags->size] <= 191)
		(flags->size)--;
	tmp = str;
	if (!(str = pf_strsub(str, 0, flags->size)))
		return (NULL);
	free(tmp);
	return (str);
}
