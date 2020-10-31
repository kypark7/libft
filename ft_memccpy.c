/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 18:07:33 by kypark            #+#    #+#             */
/*   Updated: 2020/10/31 20:44:22 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	unsigned char	*new_s1;
	unsigned char	*new_s2;
	size_t			i;
	size_t			flag;

	i = 0;
	flag = 0;
	new_s1 = (unsigned char *)s1;
	new_s2 = (unsigned char *)s2;
	while (i < n && flag == 0)
	{
		new_s1[i] = new_s2[i];
		if (new_s2[i] == (char)c)
			flag = 1;
		i++;
	}
	if (flag == 0)
		return (NULL);
	else
		return (s1 + i);
}
