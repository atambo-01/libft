/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 00:25:30 by atambo            #+#    #+#             */
/*   Updated: 2024/05/22 14:02:53 by atambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	if (!s)
		return ;
	i = 0;
	ptr = (char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}
