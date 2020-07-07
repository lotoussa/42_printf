/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 15:27:35 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 03:40:51 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

static char		*ft_standard(const char *format, int *i)
{
	int		j;
	char	*str;

	j = I;
	while (format[I] != '%' && format[I])
		I++;
	if (!(str = pf_strsub((char*)format, j, I - j)))
		return (NULL);
	return (str);
}

int				ft_printf(const char *format, ...)
{
	va_list		ap;
	int			i;
	int			len;
	char		*save;

	i = 0;
	va_start(ap, format);
	len = 0;
	while (format[i])
	{
		if (!(save = ft_standard(format, &i)))
			return (-1);
		ft_putstr(save);
		len += ft_strlen(save);
		free(save);
		if (!(save = pf_special(format, &i, ap, &len)))
			return (-1);
		ft_putstr(save);
		len += ft_strlen(save);
		free(save);
	}
	return (len);
}
