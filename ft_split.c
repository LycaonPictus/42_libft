/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jholland <jholland@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 18:44:30 by jholland          #+#    #+#             */
/*   Updated: 2025/08/27 16:28:28 by jholland         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

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

int	add_word_found(char **list, const char *str, unsigned int *size, char c)
{
	int		j;
	char	*tmp;

	j = 0;
	while (str[j] && str[j] != c)
		j++;
	tmp = ft_substr(str, 0, j);
	if (!tmp)
		return (-1);
	if (ft_strlen(tmp))
		list[(*size)++] = tmp;
	else
		free(tmp);
	return (j);
}

void	destroy_list(char **list, unsigned int list_index)
{
	while (list_index)
		free(list[--list_index]);
	free(list);
}

char	**ft_split(char const *s, char c)
{
	char			**list;
	size_t			i;
	int				j;
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
		j = add_word_found(list, &s[i], &list_index, c);
		if (j == -1)
		{
			destroy_list(list, list_index);
			return (NULL);
		}
		i += j;
	}
	list[list_index] = NULL;
	return (list);
}
