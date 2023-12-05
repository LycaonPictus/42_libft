/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 15:36:02 by jholland          #+#    #+#             */
/*   Updated: 2023/12/05 13:07:21 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}

/* int	main(int argc, char** argv)
{
	if (argc == 2)
	{
		printf("isascii\t\t-> %d\n", isascii(atoi(argv[1])));
		printf("ft_isascii\t-> %d\n", ft_isascii(atoi(argv[1])));
	}
} */