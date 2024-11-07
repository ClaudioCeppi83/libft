/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:11:55 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/16 21:33:20 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count(const char *s, char c)
{
	int	num;
	int	in_word;

	num = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			num++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (num);
}

static char	*alloc_word(const char *start, int len)
{
	char	*word;

	word = malloc(len + 1);
	if (word)
		ft_strlcpy(word, start, len + 1);
	return (word);
}

static char	**free_all(char **words, int cnt)
{
	while (cnt--)
		free(words[cnt]);
	free(words);
	return (NULL);
}

static void	init_vars(size_t *i, int *j, int *start)
{
	*i = 0;
	*j = 0;
	*start = -1;
}

char	**ft_split(const char *s, char c)
{
	char	**words;
	size_t	i;
	int		j;
	int		start;

	init_vars(&i, &j, &start);
	words = malloc((count(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			words[j] = alloc_word(&s[start], i - start);
			if (!words[j])
				return (free_all(words, j));
			start = -1;
			j++;
		}
		i++;
	}
	words[j] = NULL;
	return (words);
}

/*
int	main(void)
{
	char	*str = "Hola carajito del carrizo";
	char	**result;
	int		i;

	result = ft_split(str, ' ');
	if (!result)
	{
		printf("Error: No se pudo dividir la cadena.\n");
		return (1);
	}

	i = 0;
	while (result[i])
	{
		printf("Palabra %d: %s\n", i + 1, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/
