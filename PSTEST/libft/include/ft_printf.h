/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/01 10:28:13 by baalbade          #+#    #+#             */
/*   Updated: 2022/12/19 08:35:41 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>
# include <limits.h>
# include <stdarg.h>

// Main function
int		ft_printf(const char *str, ...);

// Numbers
void	ft_print_nb(int nb, int *tot_len);
void	ft_print_hexa(unsigned int nb, char c, int *tot_len);
void	ft_print_unsigned(unsigned int u, int *tot_len);
void	ft_print_ptr(size_t ptr, int *tot_len);

// Characters
void	ft_print_char(char c, int *tot_len);
void	ft_print_str(char *str, int *tot_len);

#endif
