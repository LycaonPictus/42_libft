/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 19:35:51 by jholland          #+#    #+#             */
/*   Updated: 2023/11/27 19:35:53 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h>
#include <stdlib.h> */
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)b;
	while (len > 0)
		ptr[len-- - 1] = c;
	return (ptr);
}

/* int main(int argc, char** argv)
{
    if (argc == 3)
    {
        char a[] = "HOLA QUE ASE";
		char b[] = "HOLA QUE ASE";
        printf("%s\n", memset(a, atoi(argv[1]), atoi(argv[2])));
        printf("%s\n", ft_memset(b, atoi(argv[1]), atoi(argv[2])));
    }
} */
