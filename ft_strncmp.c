/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 14:06:10 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/13 14:13:12 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
			return (1);
		else if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

#include <stdio.h>

int	main(void)
{
	int	size;

	char	s1[] = "Hola";
	char	s2[] = "Holo";

	size = ft_strncmp(s1, s2, 4);

	if (size > 0)
		printf("s1 is longer");
	else if (size < 0)
		printf("s2 is longer");
	else
		printf("The strings are =.");
	return (0);
}
