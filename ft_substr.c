/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 21:44:31 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/11 21:44:34 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*res;
	size_t	len_s;
	size_t	i;

	i = 0;
	len_s = 0;
	if (*s == '\0' || len == 0)
		return (NULL);
	while (s[len_s] != '\0')
		len_s++;
	if (start >= len_s)
		return (NULL);
	if (len_s - start < len)
		len = len_s - start;
	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}
/*
int main()
{
	char	str[] = "Hello Madrid";
	char	*res = ft_substr(str, 6, 6);
	int		i = 0;

	if (res)
	{
		printf("Pointer = %p\n", res);
		while (res[i] != '\0')
		{
			printf("%c", res[i]);
			i++;
		}
		printf("\n");
		free(res);
	}
	return (0);
}
*/
