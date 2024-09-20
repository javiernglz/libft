/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:14:36 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/20 14:25:44 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (size > 0)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

int	main(void)
{
	char src[] = "Elena is annoying";
	char dest[10];
	size_t	len;

	len = ft_strlcpy(dest, src, sizeof(dest));

	printf("Cadena copiada en el destino: %s\n", dest);
	printf("Longitud cadena inicial: %zu\n", len);
	printf("size del buffer destino: %zu\n", sizeof(dest));

	return (0);
}
