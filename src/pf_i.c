/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_i.c                                           .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/12 13:19:28 by tduverge     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/15 21:07:34 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char	*pf_i(va_list ap, t_flags *flags)
{
	return (pf_d(ap, flags));
}
