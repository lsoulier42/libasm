/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   valid_test.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 16:09:48 by lsoulier          #+#    #+#             */
/*   Updated: 2020/12/05 16:14:36 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void valid_test(int return_value)
{
	if (return_value == 1)
		printf("\xE2\x9C\x85\n");
	else
		printf("\xE2\x9D\x8C\n");
}
