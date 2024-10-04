/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:56:50 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:56:50 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}
//int	main(void)
//{
//	const char *test_str = "Hello, World!";
//	size_t length;
//
//	length = ft_strlen(test_str);
//
//	printf("String: %s\n", test_str);
//	printf("Length: %zu\n", length);
//
//	return 0;
//}