/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:13:18 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/12 16:13:24 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	j = ft_strlen(s1);
	while (j > i && ft_strchr(set, s1[j - 1]))
		j--;
	trimmed = (char *)malloc(sizeof(char) * (j - i + 1));
	if (!trimmed)
		return (NULL);
	ft_strlcpy(trimmed, &s1[i], j - i + 1);
	return (trimmed);
}

/*
int main(void)
{
  char *s1 = " @%# como estas hoy?% #@ %@";
  char set[] = " @%#";
  char *result;
  
  result = ft_strtrim(s1, set);
  if (result)
  {
    printf("String original: %s\n", s1);
    printf("\n");
    printf("String limpio: %s\n", result);
    cdfree(result);
  }
  else
    printf("Error en la ejecucion de limpieza");
  return (0);
}*/
