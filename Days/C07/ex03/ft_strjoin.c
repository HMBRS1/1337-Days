#include <stdlib.h>

int	ft_strlen(int size, char **strs, char *sep)
{
	int	i;
	int	j;
	int	len;

	i = 0;
	len = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			j++;
			len++;
		}
		if (i < size - 1)
		{
			while (sep[j++])
				len++;
		}
		i++;
	}
	return (len);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;

	if (size == 0)
	{
		str = malloc(1);
		if (str)
			str[0] = '\0';
		return (str);
//		return(0);
	}
	str = malloc(ft_strlen(size, strs, sep) + 1);
	if (!str)
		return (NULL);
	str[0] = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(str, strs[i]);
		if (i++ < size - 1)
			ft_strcat(str, sep);
	}
	return (str);
}
/*



int main(void)
{
	char	*p[] = {"hello", "worls", "this", "is", "world"};
	int	size = 5;
	char	*sep = " - ";

	char	*x = ft_strjoin(size, p, sep);
	if(p)
	{
		printf("%s", x);
		free(x);
	}
	else
		printf("hello");
	return (0);
}



#include <stdio.h>

int	main(void)
{
	char *words[] = {"Hello", "1337", "World"};
	int size = 3;
	char *sep = " - ";

	char *result = ft_strjoin(size, words, sep);
	if (result)
	{
		printf("%s\n", result);
		free(result);
	}
	else
		printf("Memory allocation failed\n");
	return (0);
}
*/
