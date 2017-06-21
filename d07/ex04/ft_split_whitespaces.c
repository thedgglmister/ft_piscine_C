/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 10:25:16 by biremong          #+#    #+#             */
/*   Updated: 2016/11/03 13:33:19 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		word_count(char *str);
int		nxt_w_count(char **nxt_w);
char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	**ft_split_whitespaces(char *str)
{
	char	**master_pntr;
	int		i;
	char	*nxt_w;
	int		nxt_wc;

	i = 0;
	nxt_w = str;
	master_pntr = (char **)malloc(sizeof(char *) * (word_count(str) + 1));
	while (i < word_count(str))
	{
		while (*nxt_w == ' ' || *nxt_w == '\t' || *nxt_w == '\n')
		{
			nxt_w++;
		}
		nxt_wc = nxt_w_count(&nxt_w);
		master_pntr[i] = (char *)malloc(sizeof(char) * (nxt_wc + 1));
		ft_strncpy(master_pntr[i], (nxt_w - nxt_wc), nxt_wc + 1);
		master_pntr[i][nxt_wc] = '\0';
		i++;
	}
	master_pntr[i] = (void *)0;
	return (master_pntr);
}

int		nxt_w_count(char **nxt_w)
{
	int		count;

	count = 0;
	while (**nxt_w != ' ' && **nxt_w != '\t' && **nxt_w != '\n'
			&& **nxt_w != '\0')
	{
		count++;
		(*nxt_w)++;
	}
	return (count);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (n > 0)
	{
		if (src[i] == '\0')
		{
			dest[j + i] = '\0';
			j++;
		}
		else
		{
			dest[j + i] = src[i];
			i++;
		}
		n--;
	}
	return (dest);
}

int		word_count(char *str)
{
	int		i;
	int		searching;
	int		count;

	i = 0;
	searching = 1;
	count = 0;
	while (str[i])
	{
		if (searching && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		{
			count++;
			searching = 0;
		}
		if (!searching && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
		{
			searching = 1;
		}
		i++;
	}
	return (count);
}
