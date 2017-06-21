/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:48:47 by biremong          #+#    #+#             */
/*   Updated: 2016/11/08 18:35:19 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2);

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	int		cmp_value;
	char	*temp;

	if (!tab[0])
		return ;
	i = 0;
	j = i + 1;
	while (tab[i + 1])
	{
		while (tab[j])
		{
			cmp_value = ft_strcmp(tab[i], tab[j]);
			if (cmp_value > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
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
