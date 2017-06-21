/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 09:58:54 by biremong          #+#    #+#             */
/*   Updated: 2016/11/10 23:27:12 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_tail.h"

int		main(int argc, char **argv)
{
	int		i;
	int		file_size;
	int		char_num;
	int		char_start;
	char	*buf;

	if (!ft_check_offset(argv[2]))
		return (1);
	i = 2;
	while (++i < argc)
	{
		if ((file_size = ft_get_char_c(argv[i])) == -1)
			return (1);
		char_num = (argv[2][0] == '+' ? file_size - ft_atoi(argv[2]) + 1 :\
				ft_atoi(argv[2]));
		buf = (char *)malloc(sizeof(char) * (char_num + 1));
		char_start = file_size - char_num;
		if (!ft_o_r_c_file(argv[i], buf, char_start, char_num))
			return (1);
		ft_print_buffer(argv[i], buf, argc, i);
		free(buf);
	}
	return (0);
}

int		ft_check_offset(char *str)
{
	int i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			ft_putstr("tail: illegal offset -- ");
			ft_putstr(str);
			ft_putstr("\n");
			return (0);
		}
		i++;
	}
	return (1);
}

char	*ft_o_r_c_file(char *file_name, char *buf, int char_start, int char_num)
{
	int		fd;
	int		ret;

	fd = open(file_name, O_RDONLY);
	if (fd < 0 && (errno == 2 || errno == 13))
	{
	}
	while (char_start-- > 0)
	{
		ret = read(fd, buf, 1);
		if (ret < 0 && errno == 21)
		{
			ft_puterr(file_name, errno);
			return (0);
		}
	}
	ret = read(fd, buf, char_num);
	buf[ret] = '\0';
	if (close(fd))
		write(2, "close() error\n", 14);
	return (buf);
}

int		ft_get_char_c(char *file_name)
{
	int		count;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	count = 0;
	fd = open(file_name, O_RDONLY);
	if (fd < 0 && (errno == 2 || errno == 13))
	{
		ft_puterr(file_name, errno);
		return (-1);
	}
	while ((ret = read(fd, buf, 1)))
	{
		if (ret < 0 && errno == 21)
		{
			return (-1);
		}
		count += ret;
	}
	if (close(fd))
		write(2, "close() error\n", 14);
	return (count);
}

int		ft_atoi(char *str)
{
	int		i;
	int		result;

	i = 0;
	result = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i])
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return (result);
}
