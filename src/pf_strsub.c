/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_strsub.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/18 15:28:58 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 16:26:25 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char		*pf_strsub(char *s, unsigned int start, size_t len)
{
	char	*tab;
	size_t	i;

	i = 0;
	if (s)
	{
		if (!(tab = (char *)malloc(sizeof(*tab) * (len) + 1)))
			return (NULL);
		while (s[start] && i < len)
		{
			tab[i] = s[start++];
			i++;
		}
		tab[i] = '\0';
		return (tab);
	}
	free(s);
	return (NULL);
}
