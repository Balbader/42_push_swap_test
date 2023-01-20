/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_entries.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 12:44:38 by baalbade          #+#    #+#             */
/*   Updated: 2023/01/20 12:44:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "unity_fixture.h"
#include "unity.h"
#include "push_swap.h"

TEST_GROUP(Entries);

TEST_SETUP(Entries)
{
}

TEST_TEARDOWN(Entries)
{
}

TEST()
{
	TEST_ASSERT_TRUE(ft_test_check_entry("0"))
}

ft_test_check_entry("A");
ft_test_check_entry(" ");
ft_test_check_entry("        ");
ft_test_check_entry("12345678");
ft_test_check_entry("-12345678");
ft_test_check_entry("abc12345678");
