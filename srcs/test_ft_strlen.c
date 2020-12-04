/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strlen.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 04:05:15 by lsoulier          #+#    #+#             */
/*   Updated: 2020/12/04 04:43:04 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

int	test_ft_strlen(void)
{
	char *short_str;
	char *empty_str;
	char *long_str; 
	int ret_real;
	int ret_ft;

	short_str = "bat";
	empty_str = "";
	long_str = "Lorem Ipsum is simply dummy text of the printing and \
	typesetting industry. Lorem Ipsum has been the industry's standard dummy \
	text ever since the 1500s, when an unknown printer took a galley of type \
	and scrambled it to make a type specimen book. It has survived not only \
	five centuries, but also the leap into electronic typesetting, remaining \
	essentially unchanged. It was popularised in the 1960s with the release \
	of Letraset sheets containing Lorem Ipsum passages, and more recently \
	with desktop publishing software like \
	Aldus PageMaker including versions of Lorem Ipsum";

	ft_putstr_endl("Tests de la fonction ft_strlen:");
	printf("Pour la petite chaine : %s\n", short_str);
	printf("strlen renvoi %d et ft_strlen renvoi %d\n", strlen(short_str), ft_strlen(short_str));
	printf("Pour la chaine vide : %s\n", empty_str);
	printf("strlen renvoi %d et ft_strlen renvoi %d\n", strlen(empty_str), ft_strlen(empty_str));
	printf("Pour la grande chaine :%s\n", long_str);
	printf("strlen renvoi %d et ft_strlen %d\n", strlen(long_str), ft_strlen(long_str));
	return (1);
}
