/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:03:51 by jholland          #+#    #+#             */
/*   Updated: 2023/12/05 13:08:11 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	in_set(char c, char const *set)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	if (!s1[start])
		return (ft_substr(s1, start, 0));
	end = ft_strlen(s1) - 1;
	while (in_set(s1[end], set))
		end--;
	return (ft_substr(s1, start, end - start + 1));
}
