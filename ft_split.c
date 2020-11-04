/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:52:47 by kypark            #+#    #+#             */
/*   Updated: 2020/11/02 19:47:52 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_getrow(char const *s, char c)
{
	int			i;
	int			n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
			n++;
		i++;
	}
	return (n + 1);
}

char			**ft_split(char const *s, char c)
{
	char		**new_s;
	int			len;

	len = ft_getrow(s, c);
	if (!(new_s = malloc(sizeof(char *) * (1))))
		return (NULL);
	if (!(new_s[0] = malloc(sizeof(char) * (3))))
		return (NULL);
	new_s[0][0] = 'a';
	new_s[0][1] = 'b';
	new_s[0][2] = 'c';
	return (new_s);
}
