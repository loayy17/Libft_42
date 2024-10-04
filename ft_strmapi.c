/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:56:37 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:56:37 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	int		i;

	if (!s || !f)
		return (NULL);
	res = malloc((ft_strlen((char *)s) + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		res[i] = f(i, s[i]);
		i++;
	}
	res[i] = '\0';
	return (res);
}
//char example_function(unsigned int index, char c)
//{
//	return c + 1;
//}
//
//int	main(void)
//{
//	const char *original = "Hello";
//	char *mapped;
//
//	mapped = ft_strmapi(original, example_function);
//	if (mapped)
//	{
//		printf("Original String: %s\n", original);
//		printf("Mapped String: %s\n", mapped);
//		free(mapped);  // تحرير الذاكرة
//	}
//	else
//	{
//		printf("Memory allocation failed.\n");
//	}
//
//	return 0;
//}