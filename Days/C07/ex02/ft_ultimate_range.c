/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hoberras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:10:10 by hoberras          #+#    #+#             */
/*   Updated: 2025/08/03 13:25:31 by hoberras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*arr;
	int	size;

	size = max - min;
	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(size * sizeof(int));
	if (!arr)
	{
		*range = NULL;
		return (-1);
	}
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	*range = arr;
	return (max - min);
}
/*
int main()
{
	int i;
	int *arr;
	int size;

	size = ft_ultimate_range(&arr, 3, 10);
	i = 0;
	while (i < size)
	{
		printf("%d ", *(arr + i));
		i++;
	}
}*/
