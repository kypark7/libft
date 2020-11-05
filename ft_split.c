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
	return (n);
}

char			**ft_split(char const *s, char c)
{
	char		**new_s;
	size_t		len;

	len = ft_getrow(s, c);
	if (!c)
		return (NULL);
	if (!(new_s = (char **)malloc(sizeof(char *) * (len + 1))))
		return (NULL);
	while(len)
	{
		if (!(new_s[len] = malloc(sizeof(char) * (3))))
			return (NULL);	
		len--;
	}
	if (len == ft_strlen(s))
		free(new_s);
	return (new_s);
}
