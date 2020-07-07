/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_upper_s.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 17:11:46 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 16:50:10 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*pf_upper_s(va_list ap, t_flags *flags)
{
	char		*str;
	char		*tmp;
	char		*new;
	wchar_t		*wstr;
	int			i;

	wstr = va_arg(ap, int*);
	if (!wstr)
		return (ft_strdup("(null)"));
	if (!(str = ft_memalloc(1)))
		return (NULL);
	i = -1;
	while (wstr[++i])
	{
		tmp = str;
		if (!(new = pf_unicode(wstr[i])))
			return (NULL);
		if (!(str = ft_strjoin(str, new)))
			return (NULL);
		free(tmp);
		free(new);
	}
	str = pf_string_prec(str, flags);
	str = pf_string_width(str, flags);
	return (str);
}
