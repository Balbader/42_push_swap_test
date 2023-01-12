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

	if ((!arr) || (!arr_size))
		return (NULL);
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

t_dlist	*ft_find_node(t_dlist *dlist, int data)
{
	t_dlist	*to_find;

	if (!dlist)
		return (NULL);
	to_find = dlist;
	while (to_find != NULL)
	{
		if (to_find->data == data)
			return (to_find);
		to_find = to_find->next;
	}
	return (NULL);
}

void	ft_insert_node(t_dlist *stack_a, int data, t_dlist *to_find)
{
	t_dlist	*node_to_insert;

	if (!stack_a)
		return ;
	while (stack_a->data != to_find->data)
		stack_a = stack_a->next;
	node_to_insert = ft_create_node(data);
	node_to_insert->next = stack_a->next;
	stack_a->next = node_to_insert;
	node_to_insert->prev = stack_a;
	if(node_to_insert->next != NULL)
		node_to_insert->next->prev = node_to_insert;
}

int	main(void)
{
	t_dlist *stack_a;
	t_dlist	*to_find;
	t_dlist	*node_to_insert;
	int		*arr = NULL;
	int		arr_size;
	int		i;

	arr_size = 10;
	arr = ft_init_arr(arr, arr_size);
	stack_a = ft_init_stack_a(arr, arr_size);
	to_find = ft_find_node(stack_a, 5);
	node_to_insert = ft_create_node(9999);
	ft_insert_node(stack_a, node_to_insert->data, to_find);
	i = 1;
	while (stack_a != NULL)
	{
		printf("stack_a - node[%d]->data: %d\n", i, stack_a->data);
		stack_a = stack_a->next;
		++i;
	}
	return (0);
}
