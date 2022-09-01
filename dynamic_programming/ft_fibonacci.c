/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarsone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 15:30:55 by cmarsone          #+#    #+#             */
/*   Updated: 2022/08/31 16:15:30 by cmarsone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int n, int *memo)
{
	int	i;

	i = 0;
	while (memo[i])
	{
		if (memo[i] == n)
			memo[i] = ft_fibonacci(n - 2, memo) + ft_fibonacci(n - 1, memo);
		i++;
	}
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (memo);
}

int	main(void)
{
	printf("%d\n", ft_fibonacci();
	return (0);
}
