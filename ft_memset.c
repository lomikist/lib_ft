/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 16:59:10 by arsargsy          #+#    #+#             */
/*   Updated: 2024/01/22 17:38:41 by arsargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void*	ft_memset(void *dest, int c, unsigned int len)
{
	unsigned int i;
	unsigned char* str = dest;

	i = 0;
	while (i < len)
	{
		i++;
		*str++ = c;
	}
	return dest;
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char str[50];

	strcpy(str, "This is string.h library function");
	puts(str);

	// memset(str, 'g', 5);
	puts(ft_memset(str, 'g', 5));

}*/
