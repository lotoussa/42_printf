/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_percent.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 17:26:16 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 16:46:43 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*pf_percent(va_list ap, t_flags *flags)
{
	char	*str;
	char	*tmp;

	(void)ap;
	str = ft_strdup("%");
	while ((int)ft_strlen(str) < flags->width && str)
	{
		tmp = str;
		if (flags->less == 1 && flags->zero == 1)
			str = ft_strjoin(str, " ");
		else if (flags->less == 1 && flags->zero == 0)
			str = ft_strjoin(str, " ");
		else
			str = ft_strjoin(flags->zero ? "0" : " ", str);
		free(tmp);
	}
	return (str);
}
