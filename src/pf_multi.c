/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_multi.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: tduverge <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 18:32:12 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 05:16:45 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

int		pf_star(const char *f, int *i, t_flags **flags)
{
	(*flags)->star = (f[I] == '*' ? 1 : 0);
	I += ((*flags)->star ? 1 : 0);
	return (1);
}

int		pf_multi(const char *f, int *i, t_flags *flags)
{
	int		j;
	char	*str;

	pf_star(f, i, &flags);
	j = I;
	while ('0' <= f[I] && f[I] <= '9')
		I++;
	if (!(str = pf_strsub((char*)f, j, I - j)))
		return (0);
	flags->width = (ft_strcmp(str, "") ? ft_atoi(str) : -1);
	free(str);
	flags->prec = (f[I] == '.' ? 1 : 0);
	I += (f[I] == '.' ? 1 : 0);
	j = I;
	while ('0' <= f[I] && f[I] <= '9')
		I++;
	if (!(str = pf_strsub((char*)f, j, I - j)))
		return (0);
	flags->size = (ft_strcmp(str, "") ? ft_atoi(str) : -1);
	free(str);
	return (1);
}
