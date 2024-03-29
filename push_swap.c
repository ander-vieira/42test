/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andeviei <andeviei@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 16:56:06 by andeviei          #+#    #+#             */
/*   Updated: 2024/03/01 13:21:36 by andeviei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	a;
	t_oper	oper;

	a = read_args(argc, argv);
	if (!stack_ordered(a))
	{
		oper = pick_algo(a);
		oper_print(oper, STDOUT_FILENO);
		oper_free(&oper);
	}
	stack_free(&a);
	return (EXIT_SUCCESS);
}
