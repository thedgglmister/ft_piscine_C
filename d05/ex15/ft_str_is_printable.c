/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 17:57:38 by biremong          #+#    #+#             */
/*   Updated: 2016/11/01 15:32:24 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		is_printable(char c);

int		ft_str_is_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!is_printable(str[i]))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		is_printable(char c)
{
	if (c >= 32 && c <= 127)
	{
		return (1);
	}
	return (0);
}
