
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	 *str;
	size_t	i;

	str = (char *)malloc((strlen(s) + 1) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char to_upper_even(unsigned int i, char c);

int main()
{
	char *result = ft_strmapi("hello world", to_upper_even);
	printf("%s\n", result);
	free(result);
	return (0);
}

char to_upper_even(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
*/
