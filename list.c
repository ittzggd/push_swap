#include"push_swap.h"

t_stack	*create_stack()
{
	t_stack	*new_stack;

	new_stack = malloc(sizeof(t_stack));
	if(new_stack == NULL)
	{
		printf("create_stack() : malloc failed\n");
		return (NULL);
	}
	new_stack->current_element_count = 0;
	new_stack->header_node.next = NULL;
	new_stack->header_node.prev = NULL;
	return (new_stack);
}

int	push_stack_a(t_stack *stack_a, t_stack_node element)
{
	t_stack_node	*head;
	t_stack_node	*curr;
	t_stack_node	*new;
	
	if(stack_a == NULL)
		return (FALSE);
	new = malloc(sizeof(t_stack_node));
	if(new == NULL)
		return (FALSE);
	*new = element;
	head = &stack_a->header_node;
	curr = &stack_a->prev;
	if(stack_a->current_element_count == 0)
		head->next = new;
	else
	{
		new->next = curr->next;
		new->prev = curr;
		curr->next->prev = new;
		curr->next = new;
	}
	head->prev = new;
	return (TRUE)
}

int	add_element(t_stack	*stack,int position, t_stack_node element)
{
	t_stack_node	*curr;
	t_stack_node	*new;

	if(stack == NULL || position > stack->current_element_count
		|| position < 0)
	{
		printf("add_element() : invalid argumen\n");
		return (FALSE);
	}
	new = malloc(sizeof(t_stack_node));
	if(new == NULL)
		return (FALSE);
	*new = element;
	curr = &stack->header_node;
	while(position > 0)
	{
		curr = curr->next;
		position --;
	}
	new->next = curr->next;
	new->prev = cirr;
	if(new->next != NULL)
		new->next->prev = new;
	curr->next = new;
	stack->current_element_count++;
	return (TRUE);
}


