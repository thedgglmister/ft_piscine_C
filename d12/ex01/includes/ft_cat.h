/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:35:15 by biremong          #+#    #+#             */
/*   Updated: 2016/11/10 22:58:44 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CAT_H

# define FT_CAT_H

# define BUF_SIZE 1000
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <errno.h>

void	ft_putstr(char *str);
void	ft_puterr(char *str, int err);
int		ft_display_file(char *file_name);
void	ft_display_stdin(void);

#endif
