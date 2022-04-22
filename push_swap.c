#include"push_swap.h"


int	main()
{
	if(check_sort(stack_a) == 1)
		exit(0);
}

int check_sort(t_stack	*stack_a)
{
	t_stack_node	*curr;
	int				i;
	
	if(stack_a == NULL)
		ft_error();
	i = 0;
	curr = stack_a->header_node.next;
	while(i < stack_a->current_element_count)
	{
		if(i != currr->index)
			return (0);
		curr = curr->next;
		i++;
	}
	return (1);
}

int	sort_stack(t_stack	*stack_a)
{
	int		num;
	int		chunk;
	t_stack	*stack_b;

	if(stack_a == NULL)
		ft_error();
	num = 0
	stack_b = create_stack();
	chunk = get_chunk(stack_a->current_element_count);
	if


}

int	get_chunk(int element_count)
{
	int	chunk;

	if(element_count < 0)
		ft_error();
	chunk = (0.000000053)*(element_count)*(element_count) 
	chunk = chunk + 0.03*(element_count) + 14.5;
	return (chunk);
}
