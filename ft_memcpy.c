/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 17:42:41 by arsargsy          #+#    #+#             */
/*   Updated: 2024/01/22 22:53:23 by arsargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stddef.h>

void    *ft_memcpy(void * dst, const void *src, size_t n)
{
	unsigned int	i;
	unsigned char *str;
   
	str = dst;
	i = 0;
	while(i < n)
	{
		str[i] = ((unsigned char *)src)[i];
		i++;	
	}
	return (dst);
}
