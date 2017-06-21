/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_functions.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 22:17:51 by biremong          #+#    #+#             */
/*   Updated: 2016/11/10 23:29:58 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

void	ft_print_buffer(char *file_name, char *buf, int argc, int i)
{
	if (argc > 4)
	{
		ft_putstr("==> ");
		ft_putstr(file_name);
		ft_putstr(" <==\n");
	}
	ft_putstr(buf);
	if (i < argc - 1)
		ft_putstr("\n");
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

void	ft_puterr(char *str, int err)
{
	write(2, "tail: ", 6);
	while (*str)
	{
		write(2, str, 1);
		str++;
	}
	if (err == 2)
		write(2, ": No such file or directory\n", 28);
	else if (err == 13)
		write(2, ": Permission denied\n", 20);
	else if (err == 21)
		write(2, ": Is a directory\n", 17);
}
