/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 14:10:44 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/08 14:10:46 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	dest = s;
	while (i < n)
	{
		*dest = c;
		i++;
		dest++;
	}
	return (s);
}
/*
int main(void)
{
	char str[30] = "Memset example";
	printf("Normal String = %s\n", str);
	memset(str, '!', 5);
	printf("String after memset = %s\n", str);
	return (0);
}
*/
