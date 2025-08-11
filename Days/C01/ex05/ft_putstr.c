/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hmbrs    <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 08:56:19 by hoberras          #+#    #+#             */
/*   Updated: 2025/07/20 09:06:13 by hoberras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		write(1, &str[len], 1);
		len++;
	}
}
/*
int	main()
{
	char	*i;
	i = "Houssam";

	ft_putstr(i);
}*/
