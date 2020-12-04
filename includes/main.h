/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 03:30:59 by lsoulier          #+#    #+#             */
/*   Updated: 2020/12/04 04:07:09 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H
# include "libasm.h"
# include <errno.h>
# include <stdlib.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <string.h>
# define BUFFER_SIZE 42

void	ft_putstr_endl(char *str);
void	ft_putstr(char *str);
char	*ft_itoa(int n);
int		ft_atoi(const char *str);
int		is_whitespace(int c);
int		map_function(int arg_input);
int		test_all_functions(void);
int		test_ft_strlen(void);
int		test_ft_strcpy(void);
int		test_ft_strcmp(void);
int		test_ft_write(void);
int		test_ft_read(void);
int		test_ft_strdup(void);
#endif