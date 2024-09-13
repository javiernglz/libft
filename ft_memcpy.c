/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:32:25 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/13 14:42:54 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)dest)[i] = ((char *)src)[i];
		i++;
	}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	src[] = "Malaguita";
	char	dest[20];
	size_t	n;
	
	n = 13;

	ft_memcpy(dest, src, n);
	printf("%s\n", dest);
	return (0);
}