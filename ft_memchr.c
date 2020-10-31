/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:07:58 by kypark            #+#    #+#             */
/*   Updated: 2020/10/28 18:08:01 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new_s;

	new_s = (unsigned char*)s;
	i = 0;
	if (n == 0)
		return (NULL);
	while (*new_s && i < n)
	{
		if (*(new_s + i) == (unsigned char)c)
			return (new_s + i);
		i++;
	}
	return (NULL);
}
