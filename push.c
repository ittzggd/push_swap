#include"push_swap.h"

t_stack_node	*get_top(t_stack *from)
{
	t_stack_node	*p_node;
	t_stack_node	*top;
	t_stack_node	*bottom;

	if(from == NULL || to == NULL)
		ft_error();
	if(from->current_element_count == 0)
		return (NULL);
	top = from->header_node->next;
	bottom = from->header_node->next;
	p_node	= from->header_node->next;
	if(from->current_element_count == 1)
	{
		top = NULL;
		bottom = NULL;
	}
	else
	{
		top->next->prev = top->prev;
		bottom->next = top->next;
		from->header_node->next = top->next;
	}
	p_node->next = p_node;
	p_node->prev = p_node;
	from->current_element_count--;
	return (p_node);
}


int	push(t_stack *to, t_stack_node	*p_node)
{
	t_stack_node	*head;

	if(to == NULL || p_node == NULL)
		return (0);
	head = to->header_node;
	if(to->current_element_coutn == 0)
	{
		head->next = p_node;
		head->prev = p_node;
	}
	else
	{
		p_node->next = head->next;
		p_node->prev = head->prev;
		head->next->prev = p_node;
		head->next = p_node;
		head->prev->next = p_node
	}
	to->current_element_count++;
	return (1);
}

void	pa(t_stack *stack_a, t_stack *stack_b)
{
	t_stack_node	*element;
	
	element = get_top(stack_b);
	if(element == NULL)
		return ;
	if(push(stack_a, element))
		printf("pa\n");
}

void	pb(t_stack *stack_b, t_stack *stack_b)
{
	t_stack_node	*element;
	element = get_top(stack_a);
	if(element == NULL)
		return ;
	if(push(stack_b, element))
		printf("pb\n");
}
