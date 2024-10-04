/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:57:33 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:57:33 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int		i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
//void print_char_with_index(unsigned int index, char *c)
//{
//	printf("Index %u: %c\n", index, *c);
//}
//
//int	main(void)
//{
//	char str[] = "Hello, World!";
//
//	ft_striteri(str, print_char_with_index);
//
//	return 0;
//}