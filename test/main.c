#include <stdlib.h>
#include <stdio.h>

typedef struct s_dlist
{
	int				data;
	struct s_dlist	*prev;
	struct s_dlist	*next;
}				t_dlist;

t_dlist	*ft_create_node(int data)
{
	t_dlist	*new_node;

	new_node = (t_dlist *)malloc(sizeof(t_dlist));
	if (!new_node)
		return (NULL);
	new_node->data = data;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

int	*ft_init_arr(int *arr, int arr_size)
{
	int	i;
	int	j;

	arr = (int *)malloc(sizeof(int ) * arr_size);
	if (!arr)
		return (0);
	j = 1;
	i = 0;
	while (i < arr_size)
	{
		arr[i] = j;
		++j;
		++i;
	}
	return (arr);
}

t_dlist	*ft_init_stack_a(int *arr, int arr_size)
{
	t_dlist	*new_node;
	t_dlist	*stack_a;
	int		i;

	i = 0;
	new_node = ft_create_node(arr[i]);
	stack_a = new_node;
	++i;
	while (i < arr_size)
	{
		new_node->next = ft_create_node(arr[i]);
		new_node->prev = new_node;
		new_node = new_node->next;
		++i;
	}
	return (stack_a);
}

int	main(void)
{
	t_dlist *stack_a;
	int		*arr = NULL;
	int		arr_size;
	int		i;

	arr_size = 10;
	arr = ft_init_arr(arr, arr_size);
	stack_a = ft_init_stack_a(arr, arr_size);
	i = 1;
	while (stack_a != NULL)
	{
		printf("stack_a - node[%d]->data: %d\n", i, stack_a->data);
		stack_a = stack_a->next;
		++i;
	}
	return (0);
}
