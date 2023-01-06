/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/21 12:51:26 by minakim           #+#    #+#             */
/*   Updated: 2022/12/30 18:21:46 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;

	if (!src && !dest)
		return (NULL);
	if (d > s)
	{
		while (n-- > 0)
			d[n] = s[n];
		return (d);
	}
	else
		return (ft_memcpy(d, s, n));
	return (d);
}
