/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 16:29:15 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/16 16:29:22 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (len--)
		*ptr++ = 0;
}
