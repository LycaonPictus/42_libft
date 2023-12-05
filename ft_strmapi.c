/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/04 21:48:33 by jholland          #+#    #+#             */
/*   Updated: 2023/12/05 13:06:58 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*out;
	unsigned int	index;

	out = malloc(ft_strlen(s) + 1);
	if (!out)
		return (out);
	index = 0;
	while (s[index])
	{
		out[index] = f(index, s[index]);
		index++;
	}
	out[index] = '\0';
	return (out);
}
