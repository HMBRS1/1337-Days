/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmbrs	  <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 09:24:24 by hmbrs	           #+#    #+#             */
/*   Updated: 2025/07/20 09:41:25 by hmbrs            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	f;
	int	l;
	int	swp;

	f = 0;
	l = size - 1;
	while (f < l)
	{
		swp = tab[f];
		tab[f] = tab[l];
		tab[l] = swp;
		f++;
		l--;
	}
}
/*
int main(void)
{
    int array[] = {1, 2, 3, 4, 5};
    int size = 5;

    printf("Original array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    ft_rev_int_tab(array, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++)
        printf("%d ", array[i]);

    printf("\n");
    return 0;
}*/
