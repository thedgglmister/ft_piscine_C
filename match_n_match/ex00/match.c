/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 00:38:06 by biremong          #+#    #+#             */
/*   Updated: 2016/11/06 22:24:12 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		i_match(char *s1, char *s2, int star_mode);

int		match(char *s1, char *s2)
{
	return (i_match(s1, s2, 0));
}

int		i_match(char *s1, char *s2, int star_mode)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2 && *s2 != '*')
		return (i_match(s1 + 1, s2 + 1, 0) || i_match(s1 + 1, s2, 1));
	if (*s2 == '*')
		return (i_match(s1, s2 + 1, 1));
	if (star_mode && *s1 == '\0')
		return (0);
	if (star_mode)
		return (i_match(s1 + 1, s2, 1));
	if (*s1 != *s2)
		return (0);
	return (0);
}
