/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 16:02:14 by jholland          #+#    #+#             */
/*   Updated: 2023/12/05 13:07:55 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

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

/* void	scopemem(char* ptr, int n)
{
	int i = 0;
	while (i < n)
	{
		if(ptr[i] < 32)
		{
			//printf("[%i]", ptr[i]);
			if(ptr[i] == '\0')
				printf("0");
			else
				printf("?");
		}
		else
			printf("%c", ptr[i]);
		i++;
	}
}

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
	char    *src_;
	char    *dst_;

	dst_ = (char *)dst;
	src_ = (char *)src;
	while (n > 0)
	{
		dst_[n] = src_[n];
		n--;
	}
	return (dst_);
}

int	main(int argc, char** argv)
{
	if(argc == 4){
		int	size = atoi(argv[3]);

		char* destino1 = malloc(50);
		char* fuente1 = malloc(50);
		memcpy(destino1, argv[1], ft_strlen(argv[1]));
		memcpy(fuente1, argv[2], ft_strlen(argv[2]));
		printf("\nDestino:\n");
		scopemem(destino1, 50);
		printf("\nFuente:\n");
		scopemem(fuente1, 50);
		int s1 = strlcat(destino1, fuente1, size);
		printf("\nResultado:\n");
		scopemem(destino1, 50);
		printf("\nY el output es: %i\n", s1);


		char* destino2 = malloc(50);
		char* fuente2 = malloc(50);
		memcpy(destino2, argv[1], ft_strlen(argv[1]));
		memcpy(fuente2, argv[2], ft_strlen(argv[2]));
		printf("\nDestino:\n");
		scopemem(destino2, 50);
		printf("\nFuente:\n");
		scopemem(fuente2, 50);
		int s2 = ft_strlcat(destino2, fuente2, size);
		printf("\nResultado:\n");
		scopemem(destino2, 50);
		printf("\nY el output es: %i\n", s2);
		free(destino2);
		free(fuente2);
		free(destino1);
		free(fuente1);
	}
}
 */