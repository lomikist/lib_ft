/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 22:14:19 by arsargsy          #+#    #+#             */
/*   Updated: 2024/01/28 22:14:20 by arsargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_size(long long int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	else if (n == 0)
	{
		return (1);
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

static char	*str_reverse(char *str)
{
	size_t	length;
	size_t	i;
	size_t	j;
	char	temp;

	i = 0;
	length = ft_strlen(str);
	j = length - 1;
	if (str == NULL)
		return (NULL);
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
	return (str);
}

static void	foo(char *str, int i, int n)
{
	if (n == 0)
		str[0] = '0';
	if (n < 0)
		str[i] = '-';
}

char	*ft_itoa(int n)
{
	int				size;
	char			*str;
	int				i;
	long long int	m;

	m = n;
	size = int_size(m);
	if (m < 0)
		m = -m;
	str = (char *)malloc(size + 1);
	if (!str)
		return (0);
	i = 0;
	while (m > 0)
	{
		str[i] = (m % 10) + '0';
		i++;
		m /= 10;
	}
	foo(str, i, n);
	str[i + 1] = '\0';
	str_reverse(str);
	return (str);
}
// int main()
// {
// 	char *result = ft_itoa(2147483647);

// 	if (result)
// 	{
// 		printf("%s\n", result);
// 		free(result);
// 	}
// 	return (0);
// }
