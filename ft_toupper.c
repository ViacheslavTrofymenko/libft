/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:34:51 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/10 13:34:55 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c > 96 && c < 123)
		return (c - 32);
	return (c);
}
/*
int	main(void)
{
	printf("Lib function result = %d\n", toupper(97));
	printf("Lib function result = %d\n", toupper(96));
	printf("Custom function result = %d\n", ft_toupper(97));
	printf("Custom function result = %d\n", ft_toupper(96));
	return (0);
}
*/
