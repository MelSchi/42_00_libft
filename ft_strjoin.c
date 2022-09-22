/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mschiman <mschiman@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/17 14:51:10 by mschiman          #+#    #+#             */
/*   Updated: 2021/06/12 10:17:40 by mschiman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_newstring(char const *s1, char const *s2, char *join)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s1 && !s2 && !join)
		return (NULL);
	while (s1 && s1[i] != '\0')
	{
		join[j] = s1[i];
		i++;
		j++;
	}
	i = 0;
	while (s2 && s2[i] != '\0')
	{
		join[j] = s2[i];
		i++;
		j++;
	}
	return (join);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	join_len;

	if (!s1 || !s2)
		return (NULL);
	join_len = ft_strlen(s1) + ft_strlen(s2);
	join = (char *) ft_calloc ((join_len + 1), sizeof (char));
	if (join == NULL)
		return (NULL);
	ft_newstring(s1, s2, join);
	return (join);
}
