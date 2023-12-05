/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:34:05 by jholland          #+#    #+#             */
/*   Updated: 2023/12/05 13:08:13 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;
	size_t	strlen;

	strlen = ft_strlen(s);
	if (start > strlen)
		len = 0;
	else if (start + len > strlen)
		len = strlen - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	s += start;
	i = 0;
	while (i < len)
	{
		sub[i] = s[i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
