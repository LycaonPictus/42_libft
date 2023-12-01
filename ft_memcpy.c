/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 20:22:34 by jholland          #+#    #+#             */
/*   Updated: 2023/11/30 20:22:39 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <string.h>
#include <stdio.h>
#include <stdlib.h> */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*src_;
	char	*dst_;
	size_t	i;

	dst_ = (char *)dst;
	src_ = (char *)src;
	i = 0;
	while (i < n)
	{
		dst_[i] = src_[i];
		i++;
	}
	return (dst);
}

/* int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		char* a = argv[1];
		char* b = argv[2];
		int	n = atoi(argv[3]);

		memcpy(a, b, n);
		//ft_memcpy(a, b, n);
		printf("%s", a);
	}
} */
