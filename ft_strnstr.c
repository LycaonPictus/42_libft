/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 22:54:11 by jholland          #+#    #+#             */
/*   Updated: 2023/11/29 22:54:13 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*c_haystack;
	int			check;
	size_t		i;
	size_t		j;

	c_haystack = (char *)haystack;
	if (*needle == '\0')
		return (c_haystack);
	i = 0;
	while (c_haystack[i] != '\0' && i < len)
	{
		check = 1;
		j = 0;
		while (check && needle[j] != '\0')
		{
			check = (c_haystack[i + j] == needle[j]) && (i + j < len);
			j++;
		}
		if (check)
			return (&c_haystack[i]);
		i++;
	}
	return (NULL);
}

/* #include <stdio.h>
#include <string.h>
int main(void)
{
	char a[] = "Hola patata";
	char b[] = "ata";
	int n = 8;
	printf("%s\n", strnstr(a, b, n));
	printf("%s\n", ft_strnstr(a, b, n));
} */