/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:57:38 by biremong          #+#    #+#             */
/*   Updated: 2016/11/01 15:33:25 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_numeric(char c);

int		ft_str_is_numeric(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_numeric(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		is_numeric(char c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
