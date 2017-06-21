/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_checks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/13 10:47:40 by biremong          #+#    #+#             */
/*   Updated: 2016/11/13 10:50:09 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_operator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	else
		return (0);
}

int		ft_is_number(char *expr, int i)
{
	if (expr[i] >= '0' && expr[i] <= '9')
		return (1);
	else if (expr[i] == '-' && ft_is_number(expr, i + 1))
		return (1);
	else
		return (0);
}
