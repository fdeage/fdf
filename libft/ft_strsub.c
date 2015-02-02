/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdeage <fdeage@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/27 17:22:20 by fdeage            #+#    #+#             */
/*   Updated: 2015/01/28 11:03:25 by fdeage           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** Mem leaks! Test dest unless src is null
*/

char			*ft_strsub(char const *src, unsigned int start, size_t len)
{
	char					*dest;
	register unsigned int	i;
	size_t					min;

	if (!src || !src[start])
		return (NULL);
	min = ft_min(len, ft_strlen(src));
	if (!(dest = (char *)malloc(sizeof(char) * (min + 1))))
		return (NULL);
	i = 0;
	while (i < min)
		dest[i++] = src[start++];
	dest[i] = '\0';
	return (dest);
}
