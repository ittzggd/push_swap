#ifndef	PUSH_SWAP_H
#define	PUSH_SWAP_H

#include<stdlib.h>
#include"libft.h"
#include"ft_printf.h"

typedef	struct s_stack_node
{
	int						index;
	int						value;
	struct	s_stack_node	*prev;
	struct	s_stack_node	*next;
}	t_stack_node;

typedef	struct s_stack
{
	int				current_element_count;
	t_stack_node	header_node;
}	t_stack;


int		swap(t_stack *stack);
void	sa(t_satck *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack_a, t_stack *stack_b);

