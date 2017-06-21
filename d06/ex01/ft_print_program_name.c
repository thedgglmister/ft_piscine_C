/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:24:07 by biremong          #+#    #+#             */
/*   Updated: 2016/11/02 23:16:58 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(int argc, char **argv)
{
	char *prgm_name;

	argc--;
	prgm_name = *argv;
	while (*prgm_name)
	{
		ft_putchar(*prgm_name);
		prgm_name++;
	}
	ft_putchar('\n');
	return (0);
}
