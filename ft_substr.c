/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:25:45 by kypark            #+#    #+#             */
/*   Updated: 2020/10/31 21:37:45 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t i;
	char *new_s;

	i = 0;
	if (len == 0)
		return (NULL);
	while (s[i])
		i++;
	if(!(new_s = malloc(sizeof(char) * i)))
		return (NULL);
	while (s[start + i] && i != len)
	{
		new_s[i] = s[start + 1];
		i++;
	}
	new_s[i] = '\0';
	return new_s;
}
