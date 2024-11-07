/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:59:23 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/10 18:59:29 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		s1_len;
	int		s2_len;
	int		join_len;
	char	*final_str;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	join_len = (s1_len + s2_len) + 1;
	final_str = malloc(join_len);
	if (!final_str)
		return (NULL);
	ft_strlcpy(final_str, s1, s1_len + 1);
	ft_strlcat(final_str, s2, join_len);
	return (final_str);
}

/*
int main(void)
{
	char *w1 = "epale";
	char *w2 = "loco";
	char *result;

	printf("Uniremos '%s' con '%s' usando la funcion 'strjoin'\n", w1, w2);
	result = ft_strjoin(w1, w2);
	printf("La nueva palabra es: %s\n", result);
}*/
