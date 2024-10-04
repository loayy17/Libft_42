/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:58:09 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:58:09 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
//int	main(void)
//{
//	int *arr;
//	size_t n = 5;
//
//	arr = (int *)ft_calloc(n, sizeof(int));
//	if (arr == NULL)
//		return 1;
//
//	for (size_t i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//	printf("\n");
//
//	free(arr);
//	return 0;
//}