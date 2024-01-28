/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:54:34 by arsargsy          #+#    #+#             */
/*   Updated: 2024/01/28 22:54:36 by arsargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	char	*str;
	int		i;

	i = 0;
	if (!s || !f)
		return ;
	str = (char *)malloc(ft_strlen(s) + 1);
	if (!str)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		str[i] = s[i];
		++i;
	}
	str[i] = '\0';
}
