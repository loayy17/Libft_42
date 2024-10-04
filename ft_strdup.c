/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:44:10 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:44:10 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*result;
	int		len;
	int		i;

	len = ft_strlen((char *)s1);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
//int	main(void)
//{
//	const char *original = "Hello, World!";
//	char *duplicate;
//
//	duplicate = ft_strdup(original);
//	if (duplicate)
//	{
//		printf("Original: %s\n", original);
//		printf("Duplicate: %s\n", duplicate);
//		free(duplicate);  // تحرير الذاكرة
//	}
//	else
//	{
//		printf("Memory allocation failed.\n");
//	}
//
//	return 0;
//}