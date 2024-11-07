/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 20:17:47 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/09/26 21:01:36 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
		return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Prueba A %d \n", ft_isalnum('r'));
	printf("Prueba B %d \n", ft_isalnum('6'));
	printf("Prueba C %d \n", ft_isalnum('#'));
}*/
