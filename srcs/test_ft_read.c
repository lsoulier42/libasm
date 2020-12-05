/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_read.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 04:08:47 by lsoulier          #+#    #+#             */
/*   Updated: 2020/12/05 16:09:08 by lsoulier         ###   ########.fr       */
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


	printf("Tests for ft_read function with BUFFER_SIZE = %d:\n", BUFFER_SIZE);
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
		while ((ret_real = read(fd_real, buf_real, BUFFER_SIZE)) != -2)
		{
			printf("Read returned %d\n", ret_real);
			if (ret_real == -1)
			{
				printf("Errno for read() from libc was set with %d\n", errno);
				printf("Strerror with read() from libc returns |%s|\n", strerror(errno));
			}
			ret_ft = ft_read(fd_ft, buf_ft, BUFFERS_SIZE);
			if (ret_ft == -1)
			{
				printf("Errno for ft_read was set with %d\n", errno);
				printf("Strerror with ft_read() returns |%s|\n", strerror(errno));
			}
			if (ret_real == -1 || ret_ft == -1)
				break ;
			printf("ft_read returned %d\n", ret_ft);
			printf("The buffer was filled with |%s| with read() from libc\n", buf_real);
			printf("The buffer was filled with |%s| with ft_read()\n", buf_ft);
			printf("Strcmp of the 2 buffers is : %d\n", strcmp(buf_real, buf_ft));
			if (ret_real == 0 && ret_ft == 0)
				break ;
		}
		close(fd_real);
		close(fd_ft);
	}
	return (1);
}
