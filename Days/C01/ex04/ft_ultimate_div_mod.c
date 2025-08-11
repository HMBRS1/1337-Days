/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmbrs    <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 08:53:20 by hoberras          #+#    #+#             */
/*   Updated: 2025/07/20 08:54:22 by hoberras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	*a = div / mod;
	*b = div % mod;
}
/*
int	main()
{
	int	a;
	int	b;

	a = 6;
	b = 2;
	printf("AVANT: a = %d, b = %d", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("\n");
	printf("APRES: a = %d, b = %d", a, b);
	printf("\n");
	return (0);

}
*/
