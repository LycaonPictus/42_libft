/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 22:45:27 by jholland          #+#    #+#             */
/*   Updated: 2023/12/05 13:07:40 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
