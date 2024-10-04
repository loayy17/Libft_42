/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:55:53 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:55:53 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subst;
	size_t	size;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	size = ft_strlen(s + start);
	if (size < len)
		len = size;
	subst = (char *)malloc(sizeof(char) * (len + 1));
	if (!subst)
		return (NULL);
	ft_strlcpy(subst, s + start, len + 1);
	return (subst);
}
//int	main(void)
//{
//	const char *str = "Hello, World!";
//	unsigned int start = 7;
//	size_t len = 5;
//	char *result;
//
//	result = ft_substr(str, start, len);
//
//	if (result)
//	{
//		printf("Substring: '%s'\n", result);
//		free(result);
//	}
//	else
//	{
//		printf("Error allocating memory.\n");
//	}
//
//	return 0;
//}