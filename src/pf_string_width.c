/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_string_width.c                                .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/14 16:53:52 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 16:47:00 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char		*pf_string_width(char *str, t_flags *flags)
{
	char	*tmp;

	if (flags->width == -1)
		return (str);
	while ((int)ft_strlen(str) < flags->width)
	{
		tmp = str;
		if (flags->less == 1)
			str = ft_strjoin(str, " ");
		else
			str = ft_strjoin((flags->zero == 1 ? "0" : " "), str);
		free(tmp);
	}
	return (str);
}
