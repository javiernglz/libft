/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 09:59:27 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/18 10:20:03 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void *ft_memchr(const void *s, int c, size_t n)
{
	unsigned char *ptr;
	size_t i;
	
	*ptr = (unsigned char *)s; // inicializamos ptr para que apunte a la dirección de memoria de s
	
	while (i < n && *ptr != (unsigned char)c)
	{
		ptr++;
		i++;
	}
	if (*ptr == (unsigned char)c))
		return (void *)ptr;
	return (NULL);
}
