/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minakim <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:27:25 by minakim           #+#    #+#             */
/*   Updated: 2022/12/10 17:27:28 by minakim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_len(char const *s, unsigned int start, size_t len)
{
	if (ft_strlen(s) < len + start)
		return ((ft_strlen(s) - start));
	else
		return (len);
}

static char	*give_null(void)
{
	char	*str;

	str = malloc(sizeof(char));
	if (str == 0)
		return (NULL);
	str[0] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned int	i;
	size_t			ni;
	char			*str;

	i = 0;
	ni = 0;
	len = check_len(s, start, len);
	if (ft_strlen(s) < start)
		return (give_null());
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	while (s[i] != '\0' && s[i])
	{
		if (i >= start && ni < len)
			str[ni++] = s[i];
		i++;
	}
	str[ni] = '\0';
	return (str);
}
