/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/27 05:53:58 by biremong          #+#    #+#             */
/*   Updated: 2016/10/27 12:41:02 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb(void)
{
	char h;
	char t;
	char u;

	h = '0' - 1;
	while ((t = ++h) <= '7')
	{
		while ((u = ++t) <= '8')
		{
			while (++u <= '9')
			{
				ft_putchar(h);
				ft_putchar(t);
				ft_putchar(u);
				if (h != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
	return ;
}
