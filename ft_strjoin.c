/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:57:26 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:57:26 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 || !s2)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	result = malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!result)
		return (0);
	ft_strlcpy(result, s1, s1_len + 1);
	ft_strlcpy(result + s1_len, s2, s2_len + 1);
	return (result);
}
//int	main(void)
//{
//	char *str1 = "Hello, ";
//	char *str2 = "World!";
//	char *joined;
//
//	joined = ft_strjoin(str1, str2);
//	if (joined)
//	{
//		printf("Joined String: %s\n", joined);
//		free(joined);  // تحرير الذاكرة
//	}
//	else
//	{
//		printf("Memory allocation failed.\n");
//	}
//
//	return 0;
//}