/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:34:03 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:34:03 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (!*s)
			return (0);
		s++;
	}
	return ((char *)s);
}
//int	main(void)
//{
//	const char *str = "Hello, World!";
//	char *result;
//
//	result = ft_strchr(str, 'W');
//	if (result)
//		printf("Found: %s\n", result);
//	else
//		printf("Character not found.\n");
//
//	result = ft_strchr(str, 'z');
//	if (result)
//		printf("Found: %s\n", result);
//	else
//		printf("Character not found.\n");
//
//	return 0;
//}