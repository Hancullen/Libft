/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linguyen <linguyen@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 15:18:38 by linguyen          #+#    #+#             */
/*   Updated: 2021/05/28 13:53:50 by linguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_itoa(int c)
{
	char			buff[sizeof(int) * CHAR_BIT / 3 + 3];
	char			*result;
	unsigned int	i;

	result = & buff[sizeof(buff) - 1];
	*--result = '\0';
	i = c;
	if (i == 0)
		*--result = '0';
	if (c < 0)
	{
		i = -i;
	}
	while (i)
	{
		--result;
		*result = '0' + i % 10;
		i = i / 10;
	}
	if (c < 0)
	{
		--result;
		*result = '-';
	}
	return (ft_strdup(result));
}
