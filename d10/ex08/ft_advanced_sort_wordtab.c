/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 23:48:47 by biremong          #+#    #+#             */
/*   Updated: 2016/11/08 18:36:40 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
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
			cmp_value = cmp(tab[i], tab[j]);
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
