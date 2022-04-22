#include"push_swap.h"

int	reverse_rotate(t_stack	*stack)
{
	t_stack_node	*head;
	t_stack_node	*bottom;

	if(stack == NULL)
		ft_error();
	if(stack->current_element_count < 2)
		return (0);
	head = &stack->header_node
	bottom = head->prev;
	head->next = bottom;
	head->next = bottom->prev;
	return (1); 
}

void	ra(t_stack	*stack_a)
{
	if(stack_a == NULL)
		ft_error();
	if(reverse_rotate(stack_a) == 1)
		printf("ra\n");
}

void	rb(t_stack	*stack_b)
{
	if(stack_b == NULL)
		ft_error();
	if(reverse_rotate(stack_b) == 1)
		printf("rb\n");
}

void	rr(t_stack	*stack_a, t_stack *stack_b)
{
	if(stack_a == NULL || stack_b == NULL)
		ft_error();
	if(reverse_rotate(stack_a) == 1 
		|| reverse_rotate(stack_b) == 1)
		printf("rr\n");
}
