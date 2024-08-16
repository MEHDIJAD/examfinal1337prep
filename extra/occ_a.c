/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   occ_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhafsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/08 15:20:04 by bhafsa            #+#    #+#             */
/*   Updated: 2024/08/08 15:23:56 by bhafsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
int	ft_strcount(char *str)
{
	int	i;
	int count;
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'A')
			count++;
		i++;
	}
	return (count);
}
int	main()
{
	char	str[] = "HAFSA BAHRAOUI";
	printf("%d", ft_strcount(str));
}
