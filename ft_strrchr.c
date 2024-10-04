/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:56:07 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:56:07 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	if (c == 0)
		return ((char *)s + i);
	while (i >= 0)
	{
		if ((char)s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
//int	main(void)
//{
//	const char *str = "Hello, World!";
//	int character = 'o';
//	char *result;
//
//	result = ft_strrchr(str, character);
//
//	if (result)
//		printf("Last occurrence of '%c': '%s'\n", character, result);
//	else
//		printf("Character '%c' not found.\n", character);
//
//	return 0;
//}