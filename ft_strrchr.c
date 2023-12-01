/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:09:40 by jholland          #+#    #+#             */
/*   Updated: 2023/11/29 20:09:45 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ss;
	char	ch;
	char	*start;

	start = (char *)s;
	ch = (char)c;
	ss = (char *)s;
	while (*ss != '\0')
		ss++;
	while (1)
	{
		if (*ss == ch)
			return (ss);
		if (ss == start)
			return (NULL);
		ss--;
	}
}

/* #include <stdio.h>
int main(void)
{
	char str[] = "Hola patata!";
	printf("%s", ft_strrchr(str,'a'));
} */
