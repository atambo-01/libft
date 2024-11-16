/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:56:49 by atambo            #+#    #+#             */
/*   Updated: 2024/05/21 17:57:13 by atambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*ptr;

	ptr = ft_itoa(n);
	if (ptr)
	{
		write(fd, ptr, ft_strlen(ptr));
		free (ptr);
	}
}
