/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:22:42 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/17 11:07:16 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s); 
			// Retornar la direccion del primer caracter encontrado
		s++;
	}
	if (!*s)
		return (NULL);
	s++;
	return ((char *)s);
}

#include <stdio.h>

int	main(void)
{
	const char *str = "Hola malaga!";
	char *res;

	res = ft_strchr(str, 'm');

	if (res)
		printf("Carácter encontrado en: %s\n", res);
	else
		printf("Carácter no encontrado\n");
	return (0);
}