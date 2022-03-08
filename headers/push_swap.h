/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyelena <cyelena@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/04 11:06:40 by cyelena           #+#    #+#             */
/*   Updated: 2022/03/08 16:36:53 by cyelena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "../libft/libft.h"

typedef struct s_median
{
	int	max;
	int	min;
	int	median;
}	t_median;

typedef struct s_stacks
{
	t_list			*a;
	t_list			*b;
	int				size;
	int				size_a;
	int				size_b;
	int				*array;
}	t_stacks;

#endif