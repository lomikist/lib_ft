/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arsargsy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 23:09:47 by arsargsy          #+#    #+#             */
/*   Updated: 2024/01/28 23:09:48 by arsargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	end = ft_strlen((char *)s1);
	while (ft_strchr(set, (int)s1[start]))
		start++;
	while (ft_strrchr(set, (int)s1[end]))
		end--;
	if (start >= end)
		return (ft_substr(s1, start, 0));
	return (ft_substr(s1, start, end - start + 1));
}

// #include <stdio.h>
// int main(){
//   // const char *str1 = "dfdfdfdfdffffffhellffffffffffdddddddddd";
//     char *s1 = "\t   \t \t\n\n\n\n\n \n\t\n \n  \n \n \n\t";
// 	char s2[] = "          ";
// 	char *strim;
//     // char *s2 = "Hello \t  Please\n Trim me !";
// 	strim = ft_strtrim(s2, " ");

//     s1 = ft_strtrim(s1," \t\n");
//     // str2 = ft_strtrim(str2," \n\t);
//     puts(s1);
// 	puts(strim);
// }
