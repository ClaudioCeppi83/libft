/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:59:48 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/10 18:59:50 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*empty_substr(void)
{
	char	*substr;

	substr = (char *)malloc(1);
	if (!substr)
		return (NULL);
	substr[0] = '\0';
	return (substr);
}

static size_t	valid_length(char const *str, unsigned int start, size_t len)
{
	size_t	str_len;

	str_len = ft_strlen(str);
	if (start >= str_len)
		return (0);
	if (len > str_len - start)
		len = str_len - start;
	return (len);
}

char	*ft_substr(char const *str, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!str)
		return (NULL);
	len = valid_length(str, start, len);
	if (len == 0)
		return (empty_substr());
	substr = (char *)malloc((len + 1) * sizeof(char));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = str[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}

/*int main(void)
{
    char *string = "Hola, mundo!";
    char *substring;

        printf("\n");
	printf("Cadena principal: %s\n", string);
	printf("\n");
    substring = ft_substr(string, 7, 5);
    if (substring)
    {
        printf("Subcadena: %s\n", substring);
        free(substring);
    }
    printf("\n");
    return (0);
}*/
