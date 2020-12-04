/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsoulier <lsoulier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/04 03:27:21 by lsoulier          #+#    #+#             */
/*   Updated: 2020/12/04 04:02:52 by lsoulier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.h"

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	write(1, str, i);
}

void	ft_putstr_endl(char *str)
{
	ft_putstr(str);
	ft_putstr("\n");
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	int		nb_char;
	long	abs_n;

	nb_char = n < 0 ? 2 : 1;
	abs_n = n < 0 ? -(long)n : n;
	nb = abs_n;
	while (nb / 10 != 0)
	{
		nb_char++;
		nb /= 10;
	}
	if (!(str = (char*)malloc(sizeof(char) * (nb_char + 1))))
		return (NULL);
	str[nb_char] = '\0';
	while (--nb_char >= 0)
	{
		str[nb_char] = abs_n % 10 + '0';
		abs_n /= 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

int		is_whitespace(int c)
{
	return (c == '\t' || c == '\n' || c == '\v'
			|| c == '\f' || c == '\r' || c == ' ');
}

int		ft_atoi(const char *str)
{
	int i;
	int nb_digit;
	int sign;
	int r_val;

	i = 0;
	sign = 1;
	r_val = 0;
	nb_digit = 0;
	while (is_whitespace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		sign = str[i] == '-' ? -1 : 1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r_val = r_val * 10 + str[i] - '0';
		i++;
		nb_digit++;
	}
	if (nb_digit >= 19)
		return (sign == 1 ? -1 : 0);
	return (r_val * sign);
}
