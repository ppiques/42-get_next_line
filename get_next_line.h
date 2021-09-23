/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppiques <ppiques@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/14 12:53:56 by ppiques           #+#    #+#             */
/*   Updated: 2021/09/23 15:27:57 by ppiques          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4096
# endif

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

int		get_next_line(int fd, char **line);
int		newline_end(char *str);
int		error_check(int fd, char *buff, char **line);
char	*get_line(char *str);
char	*get_save(char *save);
char	*ft_strjoin(char *s1, char const *s2);
void	*ft_memmove(void *dst, const void *src, size_t len);
size_t	ft_strlen(const char *str);

#endif
