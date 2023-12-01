/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 16:30:19 by jholland          #+#    #+#             */
/*   Updated: 2023/11/30 16:30:20 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*out;
	int		i;
	int		size;

	size = ft_strlen(s1) + 1;
	out = malloc(size);
	if (!out)
		return (NULL);
	i = 0;
	while (i < size)
	{
		out[i] = s1[i];
		i++;
	}
	return (out);
}
