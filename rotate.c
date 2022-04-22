#include"pushswap.h"

int	rotate(t_stack *stack)
{
	t_stack_node	*head;
	t_stack_node	*top;

	if(stack == NULL)
		ft_error();
	if(stack->current_element_count < 2)
		return (0);
	head = &stack->header_node;
	top = head->next;
	head->prev = top;
	head->next = top->next;
	return (1);
}

void	ra(t_stack	*stack_a)
{	
	if(stack_a == NULL)
		ft_error();
	if(rotate(stack_a) == 1)
		printf("ra\n");
}

void	rb(t_stack *stack_b)
{
	if(stack_b == NULL)
		ft_error();
	if(rotate(stack_b) == 1)
		printf("rb\n");
}

void	rr(t_stack *stack_a, t_stack *stack_b)
{
	if(stack_a == NULL || stack_b == NULL)
		ft_error();
	if(rotate(stack_a) == 1 || rotate(stack_b) == 1)
		printf("rr\n");
}
