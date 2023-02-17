
	int		size;

	size = 20;
	ra = (int *)malloc(sizeof(int) * size);
	if (!ra)
		return (0);
	a = ft_init_rand_stack(ra, 0, size);
