/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:44:17 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/09/26 20:20:04 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int nbr)
{
	if (nbr >= '0' && nbr <= '9')
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Prueba A %d \n", ft_isdigit('r'));
	printf("Prueba B %d \n", ft_isdigit('6'));
}*/
