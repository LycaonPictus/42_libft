/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:59:43 by jholland          #+#    #+#             */
/*   Updated: 2023/11/29 21:59:45 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	int		total_size;
	char	*out;

	total_size = count * size;
	out = malloc(total_size);
	if (out == NULL)
		return (out);
	while (total_size > 0)
		out[--total_size] = 0;
	return ((void *)out);
}

/* int main(void)
{
	void* a = ft_calloc(30, 4);
	a++;
} */