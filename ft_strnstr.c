/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:56:15 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:56:15 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s, const char *need, size_t len)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (need[0] == '\0')
	{
		return ((char *) s);
	}
	while (s[i] != '\0' && i < len)
	{
		while (s[i + j] == need [j] && i + j < len)
		{
			if (need[j + 1] == '\0')
			{
				return ((char *) &s[i]);
			}
			j ++;
		}
		j = 0;
		i++;
	}
	return (0);
}
//int	main(void)
//{
//	const char *haystack = "Hello, World!";
//	const char *needle = "World";
//	size_t len = 13;  // طول النص الكامل
//	char *result;
//
//	result = ft_strnstr(haystack, needle, len);
//
//	if (result)
//		printf("Found substring: '%s'\n", result);
//	else
//		printf("Substring not found.\n");
//
//	return 0;
//}