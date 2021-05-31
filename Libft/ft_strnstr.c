/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linguyen <linguyen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/13 23:07:05 by linguyen          #+#    #+#             */
/*   Updated: 2021/05/31 21:36:38 by linguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[i] == '\0' || (haystack == needle))
		return ((char *)haystack);
	while (haystack[i] && i < n)
	{
		j = 0;
		while (haystack[i + j] && haystack[i + j] == needle[j] && (i + j) < n)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}

/*
**
** This version passed all the tests 
** from libft-unit-test and war-machine. 
** However, it got seg fault on Moulinette.
** Need to check for what the problem is here
**
** char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
** {
** 	char		*start;
** 	const char	*to_find;
** 
** 	if (*needle == '\0')
** 		return ((char *) haystack);
** 	while (*haystack && n > 0)
** 	{
** 		start = (char *) haystack;
** 		to_find = needle;
** 		while (*to_find && *haystack == *to_find && n > 0)
** 		{
** 			to_find++;
** 			haystack++;
** 			n--;
** 		}
** 		if (*to_find == '\0')
** 			return (start);
** 		if (n == 0)
** 			break ;
** 		n--;
** 		haystack = start + 1;
** 	}
** 	return (0);
** }
** 
*/
