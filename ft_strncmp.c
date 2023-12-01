/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:41:07 by jholland          #+#    #+#             */
/*   Updated: 2023/11/29 20:41:09 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	diff;

	diff = 0;
	while ((diff == 0) && (*s1 != '\0' || *s2 != '\0') && (n > 0))
	{
		diff = (unsigned char)*(s1++) - (unsigned char)*(s2++);
		n--;
	}
	return (diff);
}

/* #include <stdio.h>
int main(void)
{
	printf("%i", ft_strncmp("HOLA","HOLA",5));
} */