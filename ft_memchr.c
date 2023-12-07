/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 20:09:40 by jholland          #+#    #+#             */
/*   Updated: 2023/12/07 19:47:07 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_memchr(const void *s, int c, size_t n)
{
	char	*ss;
	char	ch;

	if (n == 0)
		return (NULL);
	ch = (char)c;
	ss = (char *)s;
	while (1)
	{
		if (*ss == ch)
			return (ss);
		if (--n <= 0)
			return (NULL);
		ss++;
	}
}
