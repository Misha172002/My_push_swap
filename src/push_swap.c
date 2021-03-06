/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:06:34 by cyelena           #+#    #+#             */
/*   Updated: 2022/03/22 20:02:30 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../headers/push_swap.h"

void	init(t_stacks *ps, int *array, t_median *data)
{
	sorter(ps, data);
	free(ps->array);
	ps->array = NULL;
	free(array);
	ft_lstclear(&ps->a);
	ft_lstclear(&ps->b);
}

void	add_if(t_stacks *ps, int *array)
{
	free(ps->array);
	ps->array = NULL;
	free(array);
	array = NULL;
	ft_lstclear(&ps->a);
	ft_lstclear(&ps->b);
}

int	main(int argc, char **argv)
{
	t_median	data;
	t_stacks	ps;
	int			*array;
	int			k;

	if (argc == 1)
		return (0);
	ft_memset(&ps, 0, sizeof(ps));
	ps.size = ft_count(argv);
	ps.array = ft_full_array(ps.size, argv);
	ft_not_repeat(ps.size, ps.array);
	array = malloc(sizeof(int) * ps.size);
	k = -1;
	while (++k < ps.size)
		array[k] = (ps.array)[k];
	ft_stacks(&ps, array);
	ft_sort_array(array, ps.size + 1);
	ft_median(array, ps.size, &data);
	if (ft_cheaking_for_sortint(&ps) == 0)
	{
		add_if(&ps, array);
		return (0);
	}
	init(&ps, array, &data);
	return (0);
}
