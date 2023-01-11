#include <stdlib.h>
#include <stdio.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;


t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}

int	main(void)
{
	t_list	*new_node;
	t_list	*head;
	int		*ptr;
	int		i;

	ptr = malloc(sizeof(int));
	if (!ptr)
		return (0);
	i = 1;
	ptr = &i;
	new_node = ft_lstnew(ptr);
	head = new_node;
	++i;
	while (i <= 10)
	{
		ptr = &i;
		new_node->next = ft_lstnew(ptr);
		new_node = new_node->next;
		++i;
	}
	i = 1;
	while (head != NULL)
	{
		printf("node[%d]: %d\n", i, *((int *)(head->content)));
		head = head->next;
		++i;
	}
	return (0);
}
