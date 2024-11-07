/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 21:52:35 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/09/26 21:55:19 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Prueba A %d \n", ft_isprint('r'));
	printf("Prueba B %d \n", ft_isprint('9'));
}*/
