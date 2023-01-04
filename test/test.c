#include <stdio.h>


// Convert decimal number to its binary form using array
void	dec_to_bin_arr(int nb)
{
	int	bin_nb[64];
	int	i;
	int	j;

	if (nb == 0)
	{
		printf("0");
		return ;
	}
	i = 0;
	while (nb > 0)
	{
		bin_nb[i++] = nb % 2;
		nb /= 2;
	}
	j = i - 1;
	while (j >= 0)
	{
		printf("%d", bin_nb[j]);
		j--;
	}
	printf("\n");
}

// Convert decimal number to its binary form using Bitwise operators
void	dec_to_bin_bit(int nb)
{
    for (int i = 31; i >= 0; i--)
	{
        int mask = (1 << i);
        if (nb & mask)
           printf("1");
        else 
           printf("0");
    }
	printf("\n");
}


int	main(void)
{
	// int nb;

	// nb = 8;
	// dec_to_bin_arr(nb);
	// dec_to_bin_bit(nb);
	// dec_to_bin_arr(nb<<2);
	// dec_to_bin_bit(nb<<2);
	printf("%d\n", 8>>1);
	printf("%d\n", 5>>2);
	printf("%d\n", 2>>4);
	printf("%d\n", 87>>3);
	printf("%d\n", 6&5);
	printf("%d\n", 7&4);
	return (0);
}
