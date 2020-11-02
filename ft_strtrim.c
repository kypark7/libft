/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kypark <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 16:26:56 by kypark            #+#    #+#             */
/*   Updated: 2020/11/02 17:34:40 by kypark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_istrim(char c, char const *set)
{
	int		i;

	i = 0;
	while (i < (int)strlen(set))
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char		*ft_strtrim(char const *s1, char const *set)
{
	char	*new_s1;
	int		len;
	int		i;
	int		l;

	len = ft_strlen(s1);
	if (!(new_s1 = malloc(sizeof(char) * (len + 1))))
		return (NULL);
	i = 0;
	l = len;
	while (ft_istrim(s1[i], set) == 1)
		i++;
	while (ft_istrim(s1[l - 1], set) == 1)
		l--;
	ft_strlcpy(new_s1, &s1[i], l - i + 1);
	return (new_s1);
}
