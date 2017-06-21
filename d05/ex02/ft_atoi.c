/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 10:40:00 by biremong          #+#    #+#             */
/*   Updated: 2016/11/01 23:16:20 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char *str, int *i);
int		neg_check(char *str, int *i);
int		convert_to_num(char *str, int *i);

int		ft_atoi(char *str)
{
	int		i;
	int		isneg;
	int		result;

	i = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r')
	{
		i++;
	}
	if (!is_numeric(str, &i))
	{
		return (0);
	}
	isneg = neg_check(str, &i);
	result = convert_to_num(str, &i);
	if (isneg)
	{
		result *= -1;
	}
	return (result);
}

int		is_numeric(char *str, int *i)
{
	if (str[*i] < '0' && str[*i] < '9' && str[*i] != '-' && str[*i] != '+')
	{
		return (0);
	}
	else if ((str[*i] == '-' || str[*i] == '+')
			&& (str[*i + 1] < '0' || str[*i + 1] > '9'))
	{
		return (0);
	}
	else
	{
		return (1);
	}
}

int		neg_check(char *str, int *i)
{
	if (str[*i] == '-')
	{
		(*i)++;
		return (1);
	}
	else if (str[*i] == '+')
	{
		(*i)++;
		return (0);
	}
	else
	{
		return (0);
	}
}

int		convert_to_num(char *str, int *i)
{
	int		total;

	total = 0;
	while (str[*i] >= '0' && str[*i] <= '9')
	{
		total *= 10;
		total += str[*i] - '0';
		(*i)++;
	}
	return (total);
}
