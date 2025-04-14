/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 16:54:58 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/08 16:55:02 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*c_dest;
	unsigned char	*c_src;
	size_t			i;

	i = 0;
	c_dest = (unsigned char *) dest;
	c_src = (unsigned char *) src;
	while (i < n)
	{
		*c_dest = *c_src;
		c_dest++;
		c_src++;
		i++;
	}
	return (dest);
}
/*
int	main()
{
	char	dest[6];
	char	*src = "Madrid, Kyiv;

	printf("Result = %s\n", memcpy(dest, src, 6));
	return (0);
}
*/
