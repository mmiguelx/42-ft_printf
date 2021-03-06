/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpernia- <mpernia-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 15:21:22 by mpernia-          #+#    #+#             */
/*   Updated: 2020/01/11 23:36:51 by mpernia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;

	if (!s || !(aux = ft_calloc(sizeof(char), len + 1)))
		return (NULL);
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	if (ft_strlen(s) > (size_t)start)
		ft_memcpy(aux, s + start, len);
	else
		aux = ft_strdup("");
	return (aux);
}
