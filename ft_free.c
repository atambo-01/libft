/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atambo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/22 20:37:29 by atambo            #+#    #+#             */
/*   Updated: 2024/11/22 20:40:57 by atambo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_free(void **ptr)
{
	if (ptr && *ptr)
	{	
		free(*ptr);
		*ptr = NULL;
	}
}

