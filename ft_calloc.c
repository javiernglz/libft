/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:59:20 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/16 16:46:09 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (len--)
		*ptr++ = 0;
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

int	main(void)
{
	// Ejemplo: Reservar memoria para un array de 10 enteros
	size_t count = 10;
	size_t size = sizeof(int);
	size_t i = 0;
	int *arr = (int *)ft_calloc(count, size);

	if (arr == NULL)
	{
		fprintf(stderr, "Error allocating memory\n");
		return (1);
	}

	// Mostrar el contenido del array
    printf("Contenido del array de enteros:\n");
	while (i < count)
	{
		printf("arr[%zu] = %d\n", i, arr[i++]); // Debería ser 0 para todos
	}

    // Liberar la memoria
	free(arr);
	return (0);
}