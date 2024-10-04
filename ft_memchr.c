/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:58:57 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:58:57 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if ((unsigned char)str[i] == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}
//int	main(void)
//{
//	char str[] = "Hello, World!";
//	char *result;
//
//	result = ft_memchr(str, 'W', sizeof(str));
//	if (result != NULL)
//		printf("Found: %s\n", result);
//	else
//		printf("Character not found.\n");
//
//	result = ft_memchr(str, 'z', sizeof(str));
//	if (result != NULL)
//		printf("Found: %s\n", result);
//	else
//		printf("Character not found.\n");
//
//	return 0;
//}