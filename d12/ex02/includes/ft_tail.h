/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: biremong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 13:35:15 by biremong          #+#    #+#             */
/*   Updated: 2016/11/10 23:21:10 by biremong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H

# define FT_TAIL_H

# define BUF_SIZE 25000

# include <fcntl.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <unistd.h>
# include <errno.h>

void	ft_putstr(char *str);
void	ft_puterr(char *str, int err);
int		ft_display_file(char *file_name);
void	ft_display_stdin(void);
int		ft_get_char_c(char *file_name);
int		ft_atoi(char *str);
char	*ft_o_r_c_file(char *file_name, char *buf, int char_start,\
		int char_num);
void	ft_print_buffer(char *file_name, char *buf, int argc, int i);
int		ft_check_offset(char *str);
#endif
