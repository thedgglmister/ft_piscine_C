/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/02 19:33:18 by biremong          #+#    #+#             */
/*   Updated: 2016/11/03 22:06:53 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcat_w_nl(char *s1, char *s2);
void	ft_strcpy(char *s1, char *s2);
int		get_size(int argc, char **argv);

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	int		size;
	int		i;

	size = get_size(argc, argv);
	result = (char *)malloc(sizeof(char) * size);
	ft_strcpy(result, argv[1]);
	i = 2;
	while (i < argc)
	{
		ft_strcat_w_nl(result, argv[i]);
		i++;
	}
	return (result);
}

void	ft_strcat_w_nl(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
		i++;
	s1[i] = '\n';
	i++;
	while (*s2)
	{
		s1[i] = (*s2);
		i++;
		s2++;
	}
	s1[i] = '\0';
}

void	ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return ;
}

int		get_size(int argc, char **argv)
{
	int		n;
	int		i;
	int		j;

	n = 0;
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			n++;
			j++;
		}
		i++;
	}
	n += (argc - 1);
	n++;
	return (n);
}
