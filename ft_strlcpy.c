/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:02:14 by jholland          #+#    #+#             */
/*   Updated: 2023/11/28 16:02:18 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <string.h> */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	src_size;

	src_size = 0;
	i = 0;
	while ((src[src_size] != '\0'))
		src_size++;
	if (dstsize == 0)
		return (src_size);
	while (i < src_size && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_size);
}

/* void	checkmem(char* ptr, int n)
{
	int i = 0;
	while (i < n)
	{
		if(ptr[i] < 32)
			printf("[%i]", ptr[i]);
		else
			printf("%c", ptr[i]);
		i++;
	}
}

int	main(void)
{
	char fuente1[] = "ASDF";
	char destino1[] = "Hola k ase";
	char fuente2[] = "ASDF";
	char destino2[] = "Hola k ase";
	int	copiar = 10;
	int s1 = strlcpy(destino1, fuente1, copiar);
	checkmem(destino1, 10);
	printf("\n%i\n", s1);
	int s2 = ft_strlcpy(destino2, fuente2, copiar);
	checkmem(destino2, 10);
	printf("\n%i\n", s2);
}
 */