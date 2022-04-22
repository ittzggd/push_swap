#include"push_swap.h"

int	swap(t_stack *stack)
{
	t_stack_node	*head;
	t_stack_node	*top;
	t_stack_node	*swap;

	if(stack == NULL)
		ft_error();
	head = &stack->header_node;
	top = head->next;
	swap = top->next;
	if(stack->current_element_count < 2)
		return (0);
	swap->prev = top->prev;
	head->next = swap
	top->next = swap->next;
	swap->next = top;
	top->prev = swap;
	if(stack->current_element_count == 2)
		head->prev = swap->next;	
	return (1);
}

void	sa(t_stack	*stack)
{
	if(stack == NULL)
		ft_error();
	if(swap(stack) == 1);
		ft_printf("sa\n");
}

void	sb(t_stack	*stack)
{
	if(stack == NULL)
		ft_error();
	if(swap(stack) == 1)
		ft_printf("sb\n");
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	if(stack_a == NULL || stack_b == NULL)
		ft_error();
	if(swap(stack_a) == 1 || swap(stack_b) == 1)
		ft_printf("ss\n");
}


