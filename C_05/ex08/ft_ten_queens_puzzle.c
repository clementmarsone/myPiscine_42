/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarsone <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 10:37:02 by cmarsone          #+#    #+#             */
/*   Updated: 2022/09/01 15:11:35 by cmarsone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*range(int n)
{
	int		i;
	char	*tab;

	i = 0;
	while (i < n)
	{
		tab[i] = i - '0';
		i++;
	}
	return (tab);
}

int	index(char c, char *state)
{
	int	i;

	i = 0;
	while (state[i])
	{
		if (state[i] == c)
			return (i);
		i++;
	}
	return (-1);
}


int	ft_strlen(char *tab)
{
	int	i;

	i = 0;
	while (tab[i])
		i++;
	return (i);
}

int	is_valid_state(char *state)
{
	// check if it is a valid solution
	return (ft_strlen(state) == 10);
}

char	*get_candidates(char *state)
{
	int		i;
	int		j;
	int		position;
	char	*candidates;

	if (!is_valid_state(state))
		return (range(10));

	// find the next position in the state to populate
	position = ft_strlen(state);
	candidates = range(10);
	// prune down candidates that place the queen into attacks
	i = 0;
	while (state[i])
	{
		j = 0
		while(state[j])
}
char	**search(char *state, char **solutions)
{
	char	*state;
	char	**solutions;
	int		i;

	i = 0;
	if (is_valid_state(state))
	{
		while (solutions[i])
			i++;
		solutions[i] = state;
	}
	i = 0;
	while (get_candidates[i])
	{
		state[i] = index(get_candidates[i]);
		search(state, solutions);
	}
	return (solutions);
}

int	ft_ten_queens_puzzle(void)
{
	char	*state;
	char	*solutions;

	search(state, solutions);
	return (ft_strlen(solutions));
}
