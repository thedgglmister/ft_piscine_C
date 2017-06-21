/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/01 19:24:07 by biremong          #+#    #+#             */
/*   Updated: 2016/11/02 23:27:03 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);
int		ft_strcmp(char *s1, char *s2);
void	sort(int argc, char **argv);

int		main(int argc, char **argv)
{
	char	*param_name;
	int		i;

	sort(argc, argv);
	i = 1;
	while (i < argc)
	{
		param_name = argv[i];
		while (*param_name)
		{
			ft_putchar(*param_name);
			param_name++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	sort(int argc, char **argv)
{
	int		i;
	int		j;
	int		cmp_value;
	char	*temp;

	i = 1;
	j = i + 1;
	while (i < argc - 1)
	{
		while (j < argc)
		{
			cmp_value = ft_strcmp(argv[i], argv[j]);
			if (cmp_value > 0)
			{
				temp = argv[i];
				argv[i] = argv[j];
				argv[j] = temp;
			}
			j++;
		}
		i++;
		j = i + 1;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && !(*s1 == '\0' && *s2 == '\0'))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
