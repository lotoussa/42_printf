/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_upper_o.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 13:26:52 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/16 11:11:40 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*pf_upper_o(va_list ap, t_flags *flags)
{
	flags->modif = l;
	return (pf_o(ap, flags));
}