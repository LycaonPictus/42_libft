/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 17:53:16 by jholland          #+#    #+#             */
/*   Updated: 2023/12/05 13:07:53 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	size1;
	size_t	size2;
	size_t	i;

	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	join = malloc(size1 + size2 + 1);
	if (!join)
		return (NULL);
	i = 0;
	while (i < size1 + size2)
	{
		if (i < size1)
			join[i] = s1[i];
		else
			join[i] = s2[i - size1];
		i++;
	}
	join[i] = '\0';
	return (join);
}
