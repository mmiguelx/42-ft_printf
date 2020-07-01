/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_utils2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <mpernia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 23:05:47 by mpernia-          #+#    #+#             */
/*   Updated: 2020/01/11 23:29:22 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

int		ft_strlen_wchart(const wchar_t *s)
{
	int		i;

	i = 0;
	while (*(s + i))
		++i;
	return (i);
}

void	ft_putchar_wchart(wchar_t a)
{
	write(1, &a, 1);
}

char	*str_lower(char *s)
{
	int i;

	i = 0;
	while (*(s + i))
	{
		if (ft_isupper(*(s + i)))
			*(s + i) = ft_tolower(*(s + i));
		++i;
	}
	return (s);
}
