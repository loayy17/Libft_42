/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 22:03:38 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 22:03:38 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned const char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}
//int	main(void)
//{
//	char src[] = "Hello, World!";
//	char dest[20];
//
//	ft_memcpy(dest, src, 13);
//	printf("Source: %s\n", src);
//	printf("Destination: %s\n", dest);
//
//	return 0;
//}