/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 04:05:15 by lsoulier          #+#    #+#             */
/*   Updated: 2020/12/05 12:26:02 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	test_ft_strlen(void)
{
	char test_strs[][] = {"Pika pika!!", "", "Lorem Ipsum is simply \
	dummy text of the printing and \
	typesetting industry. Lorem Ipsum has been the industry's standard dummy \
	text ever since the 1500s, when an unknown printer took a galley of type \
	and scrambled it to make a type specimen book. It has survived not only \
	five centuries, but also the leap into electronic typesetting, remaining \
	essentially unchanged. It was popularised in the 1960s with the release \
	of Letraset sheets containing Lorem Ipsum passages, and more recently \
	with desktop publishing software like \
	Aldus PageMaker including versions of Lorem Ipsum", NULL};
	int i;

	i = -1;

	printf("Tests for ft_strlen function :\n");
	while (test_strs[++i])
	{
		printf("For the following strings : |%s|\n", test_strs[i]);
		printf("The return of strlen is : %d\n", strlen(test_strs[i]));
		printf("The return of ft_strlen is : %d\n", ft_strlen(test_strs[i]));
	}
	return (1);
}
