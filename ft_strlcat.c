/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:02:14 by jholland          #+#    #+#             */
/*   Updated: 2025/08/27 16:28:28 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <libft.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_size;
	size_t	eff_size;

	src_size = ft_strlen(src);
	eff_size = ft_strlen(dst);
	if (dstsize == 0)
		return (src_size);
	i = eff_size;
	if (eff_size > dstsize)
	{
		eff_size = dstsize;
		return (eff_size + src_size);
	}
	while ((i < eff_size + src_size) && (i < dstsize - 1))
	{
		dst[i] = src[i - eff_size];
		i++;
	}
	dst[i] = '\0';
	return (eff_size + src_size);
}
