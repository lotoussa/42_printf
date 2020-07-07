/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_flags.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 18:22:43 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/19 03:33:53 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

static void	pf_init_flags_ntr(t_flags *flags)
{
	flags->hashtag = 0;
	flags->less = 0;
	flags->more = 0;
	flags->space = 0;
	flags->zero = 0;
}

void		pf_flags(const char *f, int *i, t_flags *flags)
{
	pf_init_flags_ntr(flags);
	while (f[I] == '#' || f[I] == '-' || f[I] == '+' ||
			f[I] == ' ' || f[I] == '0')
	{
		if (f[I] == '#')
			flags->hashtag = 1;
		else if (f[I] == '-')
			flags->less = 1;
		else if (f[I] == '+')
			flags->more = 1;
		else if (f[I] == ' ')
			flags->space = 1;
		else if (f[I] == '0')
			flags->zero = 1;
		I++;
	}
}
