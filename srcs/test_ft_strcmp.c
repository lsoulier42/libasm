/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_strcmp.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 04:07:46 by lsoulier          #+#    #+#             */
/*   Updated: 2020/12/05 12:26:18 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

static char	*ret_cmp(int return_value)
{
	char	*ret_str;

	if (return_value == 0)
		ret_str = "is 0";
	else if (return_value < 0)
		ret_str = "is a negative value";
	else
		ret_str = "is a positive value";
	return (ret_str);	
}

int			test_ft_strcmp(void)
{
	char	test_strs[][] = {"a", "b", "aa", "dd", "test", "test", "zest", 
		"best", "djfndjfadfj", "ejfnjweifnfiw", "abc", "abd", 
		"\xff", "\xff\xff", "anticonstitutionnellement", 
		"anticonstitutionnellement", NULL};
	int i = 0;

	printf("Tests for ft_strcmp function :\n");
	while(test_strs[i])
	{
		printf("Test with the following strings s1=|%s| et s2=|%s|\n", 
			test_strs[i], test_strs[i + 1]);
		printf("The return of strcmp %s\n", 
			ret_cmp(strcmp(test_strs[i], test_strs[i + 1])));
		printf("The return of ft_strcmp %s\n", 
			ret_cmp(ft_strcmp(test_strs[i], test_strs[i + 1])));
		i += 2;
	}
	return (1);
}
