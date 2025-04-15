/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: viacheslav <viacheslav@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 23:01:30 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/15 11:51:36 by viacheslav       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
#include <stdio.h>

static int	in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*res;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;

	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;

	res = (char *)malloc((end - start + 1) * sizeof(char));
	if (!res)
		return (NULL);

	i = 0;
	while (start < end)
		res[i++] = s1[start++];
	res[i] = '\0';

	return (res);
}
/*
int	main()
{
	char	str[] = "Hello Madrid Madrid Badrid";
	char	*res = ft_strtrim(str, "rid");
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
