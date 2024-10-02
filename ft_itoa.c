/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 12:46:29 by frnavarr          #+#    #+#             */
/*   Updated: 2024/10/02 13:04:23 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	int		is_negative;

	res = (char *)malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (is_negative)
		n = -n;
	while (n > 0)
		res = (n % 10) + 48;
	return (res);
}
