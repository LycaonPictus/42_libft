/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:45:27 by jholland          #+#    #+#             */
/*   Updated: 2025/08/27 16:28:28 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src_;
	char	*dst_;
	size_t	i;

	if (!dst && !src && len)
		return (dst);
	dst_ = (char *)dst;
	src_ = (char *)src;
	i = 0;
	while (i < len)
	{
		if (dst_ < src_)
			dst_[i] = src_[i];
		else
			dst_[len - i - 1] = src_[len - i - 1];
		i++;
	}
	return (dst);
}
