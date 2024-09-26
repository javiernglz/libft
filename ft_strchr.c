/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:22:42 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/26 18:26:43 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		s++;
	}
	if (!*s)
		return (NULL);
	s++;
	return ((char *)s);
}

/* int	main(void)
{
	const char	*str;
	char		*res;

	str = "Hola malaga!"
	res = ft_strchr(str, 'a');
	if (res)
		printf("%s\n", res);
	else
		printf("Carácter no encontrado\n");
	return (0);
} */
