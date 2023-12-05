/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:44:30 by jholland          #+#    #+#             */
/*   Updated: 2023/12/05 13:07:45 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	count_words(char const *str, char c)
{
	unsigned int	count;
	int				new_word;

	if (!*str)
		return (0);
	new_word = *(str++) != c;
	count = new_word;
	while (*str)
	{
		if (new_word && *str == c)
			new_word = 0;
		else if (!new_word && *str != c)
		{
			new_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

void	add_to_list(char ***list, char *str, unsigned int *size)
{
	if (ft_strlen(str))
		(*list)[(*size)++] = str;
	else
		free(str);
}

char	**ft_split(char const *s, char c)
{
	char			**list;
	size_t			i;
	size_t			j;
	char			*tmp;
	unsigned int	list_index;

	list = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!list)
		return (NULL);
	i = 0;
	list_index = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[j] && s[j] != c)
			j++;
		tmp = ft_substr(s, i, j - i);
		add_to_list(&list, tmp, &list_index);
		i = j;
	}
	list[list_index] = NULL;
	return (list);
}

/* 
int main(void)
{
	char aa[1000] = "";
	printf("El num palabra es: %u\n", count_words(aa, 'a'));
	char **lista = ft_split(aa, 'a');
	while (*lista != NULL)
		printf("%s\n",*(lista++));
} */