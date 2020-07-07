/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_printf.h                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: lotoussa <lotoussa@student.le-101.fr>      +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/12/11 13:29:54 by lotoussa     #+#   ##    ##    #+#       */
/*   Updated: 2017/12/20 03:41:06 by lotoussa    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>
# include "libft/libft.h"

# define I (*i)

typedef enum	e_ptype
{
	n,
	d,
	i,
	o,
	u,
	x,
	X,
	c
}				t_ptype;

typedef struct	s_base
{
	char		*save;
	char		*tmp;
	char		*str;
	char		*special;
}				t_base;

typedef enum	e_modif
{
	null,
	hh,
	h,
	l,
	ll,
	j,
	z
}				t_modif;

typedef struct	s_flags
{
	int			hashtag;
	int			zero;
	int			less;
	int			more;
	int			space;
	int			width;
	int			star;
	int			prec;
	int			size;
	t_modif		modif;
	t_ptype		ptype;
}				t_flags;

char			*pf_litoa_base(long n, char *base);
char			*pf_luitoa_base(unsigned long n, char *base);
char			*pf_special(const char *format, int *i, va_list ap, int *len);
int				ft_printf(const char *format, ...);
void			pf_flags(const char *f, int *i, t_flags *flags);
int				pf_multi(const char *f, int *i, t_flags *flags);
void			pf_modif(const char *f, int *i, t_flags *flags);
char			*pf_s(va_list ap, t_flags *flags);
char			*pf_upper_s(va_list ap, t_flags *flags);
char			*pf_p(va_list ap, t_flags *flags);
char			*pf_d(va_list ap, t_flags *flags);
char			*pf_upper_d(va_list ap, t_flags *flags);
char			*pf_i(va_list ap, t_flags *flags);
char			*pf_o(va_list ap, t_flags *flags);
char			*pf_upper_o(va_list ap, t_flags *flags);
char			*pf_u(va_list ap, t_flags *flags);
char			*pf_upper_u(va_list ap, t_flags *flags);
char			*pf_x(va_list ap, t_flags *flags);
char			*pf_upper_x(va_list ap, t_flags *flags);
char			*pf_c(va_list ap, t_flags *flags);
char			*pf_upper_c(va_list ap, t_flags *flags);
char			*pf_type(const char *f, int *i, t_flags *flags, va_list ap);
char			*pf_unicode(int i);
char			*pf_string_prec(char *str, t_flags *flags);
char			*pf_string_width(char *str, t_flags *flags);
char			*pf_number(char *str, t_flags *flags, va_list ap);
char			*pf_percent(va_list ap, t_flags *flags);
char			*pf_hashtag_hex(char *s);
char			*pf_hashtag_octal(char *s);
char			*pf_hashtag_upper_hex(char *s);
char			*pf_hashtag(t_ptype ptype, char *s);
char			*pf_invalid_type(t_flags *flags, char c);
char			*pf_strsub(char *s, unsigned int start, size_t len);
void			pf_star_width(char **str, t_flags **flags, va_list ap);
int				pf_give_len(int len);
void			pf_durty_c(char *str, t_flags *flags, int *len);

#endif
