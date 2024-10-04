/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:57:47 by lalhindi          #+#    #+#             */
/*   Updated: 2024/10/04 23:32:57 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}

//int	main(void)
//{
//	char str1[] = "1234";
//	char str2[] = "   -5678";
//	char str3[] = "+42";
//	char str4[] = "   123abc";
//
//	printf("Result of '%s': %d\n", str1, ft_atoi(str1));
//	printf("Result of '%s': %d\n", str2, ft_atoi(str2));
//	printf("Result of '%s': %d\n", str3, ft_atoi(str3));
//	printf("Result of '%s': %d\n", str4, ft_atoi(str4));
//
//	return 0;
//}