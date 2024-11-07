/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cceppi-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 17:56:49 by cceppi-c          #+#    #+#             */
/*   Updated: 2024/09/28 18:23:24 by cceppi-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stddef.h>*/

#include "libft.h"

void	ft_bzero(void *b, size_t len)
{
	char	*temp;

	temp = b;
	while (len > 0)
	{
		*temp = 0;
		temp++;
		len--;
	}
}

/*#include <stdio.h>
int	main(void)
{
	char buffer[10] = "Epalex";
	ft_bzero(buffer, sizeof(buffer));
	printf("%s\n", buffer);
	return(0);
}*/
