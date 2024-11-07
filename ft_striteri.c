/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 21:33:57 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/10/14 21:34:01 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (s != NULL && f != NULL)
	{
		while (s[i] != 0)
		{
			f(i, &s[i]);
			i++;
		}
	}
}

/*void to_uppercase(unsigned int index, char *c) {*/
/*    (void)index; // Evita error de index sin uso*/
/*    *c = ft_toupper((unsigned char)*c);*/
/*}*/

/*int main() {*/
/*    char str[] = "hello";*/
/*    */
/*    printf("Cadena original: %s\n", str);*/
/*    */
/*    ft_striteri(str, to_uppercase);*/
/*    */
/*    printf("Cadena modificada: %s\n", str);*/
/*    */
/*    return 0;*/
/*}*/
