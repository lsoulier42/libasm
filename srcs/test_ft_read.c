/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 04:08:47 by lsoulier          #+#    #+#             */
/*   Updated: 2020/12/05 12:59:21 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	test_ft_read(void)
{
	int fd_real;
	int fd_ft;
	char test_files[][] = {"empty_file", "huge_file", 
		"notfound_file", "/home/user42/", "zelda_file", NULL};
	int i = -1;
	int ret_real;
	int ret_ft;
	char *buf_real;
	char *buf_ft;


	printf("Tests for ft_read function :\n");
	while (test_files[++i])
	{
		int fd_real = open(test_files[i], O_RDONLY);
		int fd_ft = open(test_files[i], O_RDONLY);
		if (strcmp(test_files[i], "notfound_file") != 0
			&& (fd_real == -1 || fd_ft == -1))
		{
			printf("%s\n", strerror(errno));
			if (fd_real != -1)
				close(fd_real);
			if (fd_ft != -1)
				close(fd_ft);
			return (0);
		}
		while ((ret_real = read(fd_real, buf_real, BUFFER_SIZE)) != 0)
		{
			printf("Read returned %d\n", ret_real);
			if (ret_real == -1)
				break ;
			printf("");	
}
