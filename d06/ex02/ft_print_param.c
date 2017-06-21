/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:24:07 by biremong          #+#    #+#             */
/*   Updated: 2016/11/02 15:07:20 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	char	*param_name;
	int		i;

	i = argc - 1;
	argv++;
	while (i)
	{
		param_name = *argv;
		while (*param_name)
		{
			ft_putchar(*param_name);
			param_name++;
		}
		ft_putchar('\n');
		argv++;
		i--;
	}
	return (0);
}
