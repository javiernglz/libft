/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:45:15 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/18 11:09:21 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	unsigned char *d = (unsigned char *)dest;
	const unsigned char	*s = (const unsigned char *)src;

	i = 0;
	if (d > s)
	{
		while (n > 0)
		{
			((char *)dest)[n - 1] = ((char *)src)[n - 1];
			n--;
		}
	}
	else
	{
		while (i < n)
		{
			((char *)dest)[i] = ((char *)src)[i];
			i++;
		}
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

	ft_memmove(dest, src, n);
	printf("%s\n", dest);
	return (0);
}