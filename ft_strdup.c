/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 18:00:47 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/20 18:03:12 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	size_t	len;

	// 1. Obtener la longitud de la cadena original
	len = ft_strlen(s1);

	// 2. Asignar memoria para la copia (+1 para el carácter nulo)
	copy = (char *)malloc((len + 1) * sizeof(char));
	if (!copy)
		return (0);

	// 3. Copiar la cadena original a la nueva ubicación
	ft_strcpy(copy, s1);  // También puedes hacerlo con un bucle manual si no tienes ft_strcpy

	return (copy);
}
