/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_tests.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 14:53:12 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/20 14:53:16 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"


static void	run_all_tests(void)
{
	RUN_TEST_GROUP(checkEntries);
	RUN_TEST_GROUP(convertEntries);
	RUN_TEST_GROUP(storeEntries);
}

int	main(int argc, char *argv[])
{
	return (UnityMain(argc, argv, run_all_tests));
}
