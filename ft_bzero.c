/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 21:04:38 by jholland          #+#    #+#             */
/*   Updated: 2023/11/27 21:04:40 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, unsigned long len)
{
	char	*ptr;

	ptr = (char *)s;
	while (len > 0)
		ptr[len-- - 1] = '\0';
}

/* #include <stdio.h>
#include <stdlib.h>
#include <strings.h>
void	scopemem(char* ptr, int n)
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
int main(int argc, char** argv)
{
    if (argc == 2)
    {
        char a[] = "HOLA QUE ASE";
        char b[] = "HOLA QUE ASE";

        bzero(a, atoi(argv[1]));
        ft_bzero(b, atoi(argv[1]));
        scopemem(a, 12);
        printf("\n");
        scopemem(b, 12);
    }
} */
