/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 21:34:02 by jholland          #+#    #+#             */
/*   Updated: 2023/12/05 13:07:04 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	nbr;

	if (!*str)
		return (0);
	while (*str == '\t' || *str == '\n' || *str == '\v'
		|| *str == '\f' || *str == '\r' || *str == ' ')
		str++;
	nbr = 0;
	sign = 1;
	if (*str == '-')
		sign = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str >= '0' && *str <= '9')
		nbr = nbr * 10 + sign * (*(str++) - '0');
	return (nbr);
}

/* #include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv)
{
	if (argc == 2)
	{
		printf("%i\n", atoi(argv[1]));
		printf("%i\n", ft_atoi(argv[1]));
	}
} */