/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtrofyme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 23:01:30 by vtrofyme          #+#    #+#             */
/*   Updated: 2025/04/11 23:01:33 by vtrofyme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdlib.h"
#include <stdio.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	len_set;
	size_t	i;
	size_t	j;
	char	*res;

	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	len_set = ft_strlen(set);
	res = (char *)malloc((len_s1 + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		if (ft_strncmp(&s1[i], set, len_set) == 0)
			i += len_set;
		else
			res[j++] = s1[i++];
	}
	res[j] = '\0';
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
