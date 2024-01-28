/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:06:43 by arsargsy          #+#    #+#             */
/*   Updated: 2024/01/28 23:06:45 by arsargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

// char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
// {
// 	char *str =		(char *)haystack;
// 	char *to_find =	(char *)needle;
// 	unsigned int	i;
// 	unsigned int	j;

// 	i = 0;
// 	if (needle[0] == '\0' || (!haystack && !n))
// 		return ((char *)haystack);
// 	while (str[i] != '\0' && i < n)
// 	{
// 		j = 0;
// 		while (str[i + j] == to_find[j] && i + j < n)
// 		{
// 			j++;
// 		}
// 		// while (str[i + j] == to_find[i + j] &&  && i + j < n)
// 		// {
// 		// 	if (needle[j + 1] == '\0')
// 		// 		return ((char *)haystack);		
// 		// 	j++;
// 		// }
// 		i++;
// 	}
// 	return (0);
// }

char	*ft_strnstr(char const *haystack, char const *needle, size_t n)
{
	size_t	j;

	if (!haystack && !n)
		return (NULL);
	if (!*needle)
		return ((char *)haystack);
	while (*haystack && n--)
	{
		j = 0;
		while (*(haystack + j) == *(needle + j)
			&& *(needle + j) && j <= n)
		{
			if (!*(needle + j + 1))
				return ((char *)haystack);
			j++;
		}
		haystack++;
	}
	return (NULL);
}

/*
#include <string.h>
#include <stdio.h
int main () {
   char str[30] = "";
   char searchString[10] = "how";
   char *result;
   char *result2;
   result = strstr(str, searchString);
   result2 = ft_strstr(str, searchString);
   printf("his	-%s-- \n", result);
   printf("my 	-%s-- \n", result2);
   return 0;
}*/
