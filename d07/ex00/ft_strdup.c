/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 13:05:20 by biremong          #+#    #+#             */
/*   Updated: 2016/11/03 13:18:08 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *s1, char *s2);

char	*ft_strdup(char *src)
{
	char	*copy;
	int		len;

	len = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * (len + 1));
	return (ft_strcpy(copy, src));
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i++])
		;
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
