/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:35:06 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/09/26 19:28:00 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Prueba A %d \n", ft_isalpha('2'));
	printf("Prueba B %d \n", ft_isalpha('w'));
}*/
