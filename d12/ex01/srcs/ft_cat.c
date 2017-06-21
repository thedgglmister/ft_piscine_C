/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:52:34 by biremong          #+#    #+#             */
/*   Updated: 2016/11/10 23:16:59 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		ft_display_stdin();
	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '-')
		{
			ft_display_stdin();
		}
		else
		{
			ft_display_file(argv[i]);
		}
		i++;
	}
}

void	ft_display_stdin(void)
{
	int		ret;
	char	buf[BUF_SIZE + 1];

	while ((ret = read(0, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	return ;
}

int		ft_display_file(char *file_name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	fd = open(file_name, O_RDONLY);
	if (fd < 0 && (errno == 2 || errno == 13))
	{
		ft_puterr(file_name, errno);
		return (1);
	}
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		if (ret < 0 && errno == 21)
		{
			ft_puterr(file_name, errno);
			return (1);
		}
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd))
		write(2, "close() error\n", 14);
	return (0);
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
	write(2, "cat: ", 5);
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
