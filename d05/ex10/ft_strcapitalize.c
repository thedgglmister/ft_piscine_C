/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/31 15:34:55 by biremong          #+#    #+#             */
/*   Updated: 2016/11/01 22:36:57 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ws_or_punct(char c);
void	to_up_char(char *str);
void	to_low_char(char *str);

char	*ft_strcapitalize(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		to_low_char(&str[i]);
		if (i == 0 || ws_or_punct(str[i - 1]))
		{
			to_up_char(&str[i]);
		}
		i++;
	}
	return (str);
}

int		ws_or_punct(char c)
{
	if (c == '\t' || c == '\n' || (c >= ' ' && c <= '/'))
		return (1);
	return (0);
}

void	to_up_char(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str = 'A' + (*str - 'a');
}

void	to_low_char(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str = 'a' + (*str - 'A');
}
