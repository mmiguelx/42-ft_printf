/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <mpernia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/05 03:05:51 by mpernia-          #+#    #+#             */
/*   Updated: 2020/01/19 18:43:51 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include "libft/libft.h"

int		ft_printf(const char *s, ...)
{
	va_list	args;
	t_case	*head;
	t_case	*aux;
	int		i;

	head = create_list(s);
	aux = head;
	va_start(args, s);
	i = 0;
	while (aux)
	{
		i += check_to_print(aux, args);
		aux = aux->next;
	}
	va_end(args);
	free_list(&head);
	return (i);
}
