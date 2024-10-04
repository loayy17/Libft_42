/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lalhindi <lalhindi@student.42amman.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 23:17:17 by lalhindi          #+#    #+#             */
/*   Updated: 2024/09/29 23:17:17 by lalhindi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
//int	main(void)
//{
//	ft_putchar_fd('H', 1);
//	ft_putchar_fd('i', 1);
//	ft_putchar_fd('!', 1);
//	ft_putchar_fd('\n', 1);
//
//	return 0;
//}