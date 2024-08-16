/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhafsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 20:26:56 by bhafsa            #+#    #+#             */
/*   Updated: 2024/08/08 20:51:20 by bhafsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_write_number(int nbr)
{
	if (nbr > 9)
	{
		ft_putchar(nbr / 10 + 48);
		ft_putchar(nbr % 10 + 48);
	}
	else
		ft_putchar(nbr + 48);
}

int	main()
{
	int	nb;

	nb = 1;
	 while (nb <= 100)
	 {
		 if (nb % 5 == 0 && nb % 3 == 0)
		 {
			 write(1, "fizzbuzz", 8);
		 }
		 else if (nb % 5 == 0)
		 {
			 write(1, "buzz", 4);
		 }
		 else if (nb % 3 == 0)
		 {
			 write(1, "fizz", 4);
		 }
		 else
			 ft_write_number(nb);
		 write(1, "\n", 1);
		 nb++; 
	 }
	 return (0);
}
