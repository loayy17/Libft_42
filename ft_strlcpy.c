/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:56:58 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:56:58 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(src);
	if (dstsize == 0)
		return (j);
	if (!dst)
		return (j);
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (j);
}
//int	main(void)
//{
//	char src[] = "Hello, World!";
//	char dst[20];
//	size_t copied_length;
//
//	copied_length = ft_strlcpy(dst, src, sizeof(dst));
//
//	printf("Source String: %s\n", src);
//	printf("Copied String: %s\n", dst);
//	printf("Length of Source: %zu\n", copied_length);
//
//	return 0;
//}