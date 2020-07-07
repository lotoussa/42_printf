/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 13:33:14 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/11 13:33:14 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_words(char const *s, char c)
{
	int		i;
	size_t	j;

	i = 0;
	j = (s[0] != c ? 1 : 0);
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
			j++;
		i++;
	}
	return (j);
}

static size_t	ft_let(char const *s, char c, int i)
{
	size_t	j;

	j = 0;
	while (s[i] && s[i] != c)
	{
		j++;
		i++;
	}
	return (j);
}

char			**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**tab;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	while (s[i] && s[i] == c)
		i++;
	if (!(tab = (char**)malloc(sizeof(char*) * (ft_words(s, c) + 1))))
		return (NULL);
	while (s[i])
	{
		j = 0;
		tab[k] = ft_strnew(ft_let(s, c, i));
		while (s[i] && s[i] != c)
			tab[k][j++] = s[i++];
		tab[k++][j] = '\0';
		while (s[i] && s[i] == c)
			i++;
	}
	tab[k] = NULL;
	return (tab);
}
