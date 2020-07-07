/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_luitoa_base.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 13:43:28 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 17:00:57 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

static int		ft_len_n(unsigned long n, int len_base)
{
	int		len;

	len = 1;
	while (n >= (unsigned long)len_base && (len++))
		n /= len_base;
	return (len);
}

char			*pf_luitoa_base(unsigned long n, char *base)
{
	int		len;
	int		len_base;
	char	*str;
	int		i;

	len_base = ft_strlen(base);
	len = ft_len_n(n, len_base);
	if (!(str = (char*)ft_memalloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = len - 1;
	while (i >= 0)
	{
		str[i--] = base[n % len_base];
		n /= len_base;
	}
	return (str);
}
