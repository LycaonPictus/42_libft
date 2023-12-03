/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:44:30 by jholland          #+#    #+#             */
/*   Updated: 2023/12/03 18:44:31 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	count_words(char const *str, char c)
{
	int	count;
	int	new_word;

	new_word = *str++ != c;
	count = 0;
	while (*str)
	{
		if (new_word && *str != c)
			new_word = 0;
		else if (!new_word && *str == c)
		{
			new_word = 1;
			count++;
		}
		str++;
	}
	printf("El num de palabras es: %i", count);
	return (count);
}

int	add_str(char ***list, size_t *nelem, char *str)
{
	size_t	i;
	char	**newlist;

	if (!str || !ft_memcmp(str, "", 1))
		return (1);
	newlist = malloc(sizeof(char *) * (*nelem + 2));
	if (!newlist)
		return (0);
	i = 0;
	while (i < *nelem)
	{
		newlist[i] = (*list)[i];
		i++;
	}
	newlist[i++] = str;
	(*nelem)++;
	newlist[i] = NULL;
	free(*list);
	*list = newlist;
	return (1);
}

char	*clean_str(char *str, char c)
{
	char	*trim;
	char	*sepstr;

	sepstr = malloc(2);
	sepstr[0] = c;
	sepstr[1] = '\0';
	trim = ft_strtrim(str, sepstr);
	free(str);
	free(sepstr);
	return (trim);
}

char	**ft_split(char const *s, char c)
{
	char	**list;
	size_t	i;
	size_t	j;
	size_t	nelem;

	list = malloc(sizeof(char *));
	list[0] = NULL;
	nelem = 0;
	i = 0;
	while (s[i])
	{
		j = i;
		while (s[j] == c)
			j++;
		while (s[j] && s[j] != c)
			j++;
		if(!add_str(&list, &nelem, clean_str(ft_substr(s, i, j - i), c)))
		{
			return (NULL);
		}
		if (!s[j])
			return (list);
		i = j + 1;
	}
	return (list);
}

int main(void)
{
	char aa[1000] = "Lorem ipsum dolor sit amet";
	count_words(aa, ' ');
}