/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/28 09:33:15 by biremong          #+#    #+#             */
/*   Updated: 2016/10/28 14:35:28 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	temp;
	int		length;
	int		i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	i = 0;
	while (i < (length - 1 - i))
	{
		temp = str[i];
		str[i] = str[length - 1 - i];
		str[length - 1 - i] = temp;
		i++;
	}
	return (str);
}
