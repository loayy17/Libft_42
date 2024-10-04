/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:56:22 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/30 14:52:23 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
//int	main(void)
//{
//	const char *str1 = "Hello, World!";
//	const char *str2 = "Hello, Wurld!";
//	size_t n = 10;
//	int result;
//
//	result = ft_strncmp(str1, str2, n);
//
//	if (result < 0)
//		printf("'%s''%s' (up to %zu characters)\n", str1, str2, n);
//	else if (result > 0)
//		printf("'%s''%s' (up to %zu characters)\n", str1, str2, n);
//	else
//		printf("'%s' is equal to '%s' (up to %zu characters)\n", str1, str2, n);
//
//	return 0;
//}