/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   pf_hashtag.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/15 18:49:24 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/18 19:02:19 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../ft_printf.h"

char		*pf_hashtag(t_ptype ptype, char *str)
{
	if (ptype == x)
		return (pf_hashtag_hex(str));
	else if (ptype == X)
		return (pf_hashtag_upper_hex(str));
	else if (ptype == o)
		return (pf_hashtag_octal(str));
	return (str);
}
