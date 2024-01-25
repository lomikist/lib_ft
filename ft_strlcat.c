/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:06:46 by arsargsy          #+#    #+#             */
/*   Updated: 2023/11/29 19:10:47 by arsargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i] != '\0')
		i++;
	while (src[k] != '\0')
		k++;
	if (i + k > size)
		return (k + size);
	while (src[j] != '\0' && (j + i) < size - 1)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + k);
}

/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char src[40] = "lalsdfsdfsdfa";

	char dest[80] = "catscats";
	char dest2[80] = "catscats";
	
	int result = strlcat(dest, src, 3);
	int result2 = ft_strlcat(dest2, src, 3);	

	printf("his --%d-----%s----\n", result,dest); 
	printf("my  --%d-----%s----\n", result2, dest2);
}*/
