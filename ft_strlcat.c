/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:14:36 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/26 18:27:11 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (size + dest[i]);
}

/* int	main(void)
{
	char dest[15] = "Buenas ";
	char *src = "tardes";
	size_t conc;

	conc = ft_strlcat(dest, src, sizeof(dest));
	printf("%s\n", dest);
	printf("Longitud de la cadena concatenada: %zu\n", conc);
	return (0);
} */
