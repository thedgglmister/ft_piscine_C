/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 10:07:54 by biremong          #+#    #+#             */
/*   Updated: 2016/11/10 22:56:29 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (!error_check(argc))
		return (1);
	fd = open(argv[1], O_RDONLY);
	if (fd < 0)
	{
		write(2, "open() error\n", 13);
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret < 0)
		{
			write(2, "read() error\n", 13);
			return (1);
		}
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd))
		write(2, "close() error\n", 14);
	return (0);
}

int		error_check(int argc)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	else
		return (1);
}

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}
