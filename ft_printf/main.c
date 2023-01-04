/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 11:03:05 by abinet            #+#    #+#             */
/*   Updated: 2022/12/20 10:45:55 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	main(void)
{
	int		original;
	int		mine;
	char	*str;

	str = "Just some text..";

	printf("\n\n--- ALL ---\n");
	original = printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	mine = ft_printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- SAME WITH %%%%%% AT THE END ---\n");
	original = printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	mine = ft_printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- SAME WITH %%%%%% AT THE END AND SOME TEXT ---\n");
	original = printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%%%| texte", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	mine = ft_printf("-> %c | %s | %p | %d | %i | %u | %x | %X | %% |%%%%| texte", str[0], str, str, 42, 42, 42, 42, 42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- EMPTY STRING ---\n");
	original = printf("");
	mine = ft_printf("");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH ft_printf(0) ---\n");
	original = printf(0);
	mine = ft_printf(0);
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH STR AS ONLY ARGUMENT ---\n");
	original = printf(str);
	printf("\n");
	mine = ft_printf(str);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH NULL AS STRING AND ADRESS ---\n");
	original = printf("-> %s | %p", NULL, NULL);
	printf("\n");
	mine = ft_printf("-> %s | %p", NULL, NULL);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH TAB AND ANTICIPATED END OF STRING ---\n");
	original = printf("-> \t|\0\0gloubiboulgah");
	printf("\n");
	mine = ft_printf("-> \t|\0\0gloubiboulgah");
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- WITH NEGATIVE VALUES ---\n");
	original = printf("%u | %x | %X | %d | %i | %c | %p", -42, -42, -42, -42, -42, -42, (void *) -42);
	printf("\n");
	mine = ft_printf("%u | %x | %X | %d | %i | %c | %p", -42, -42, -42, -42, -42, -42, (void *) -42);
	printf("\n");
	printf("%d : %d\n", original, mine);

	printf("\n\n--- PRINT ADRESS WITH %%x and %%X ---\n");
	original = printf("%x | %X | %x | %X", NULL, NULL, &str, &str);
	printf("\n");
	mine = ft_printf("%x | %X | %x | %X", NULL, NULL, &str, &str);
	printf("\n");
	printf("%d : %d\n", original, mine);
}
