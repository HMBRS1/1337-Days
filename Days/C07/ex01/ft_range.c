/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmbrs	  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 11:17:40 by hmbrs	           #+#    #+#             */
/*   Updated: 2025/08/03 12:05:12 by hmbrs	          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*re;

	i = 0;
	if (min >= max)
		return (NULL);
	re = (int *)malloc((max - min) * sizeof(int));
	if (!re)
		return (NULL);
	while (min < max)
		re[i++] = min++;
	return (re);
}
/*
int main()
{
	int i;
	int *arr;

	if (!arr)
		return (1);
	arr = ft_range(5, 10);
	i = 0;
	while(i < 5)
	{
		printf("%d ", *(arr + i));
		i++;
	}
	free(arr);
}*/
