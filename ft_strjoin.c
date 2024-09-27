/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:46:54 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/27 16:14:41 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;

	join = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!join)
		return (NULL);
	ft_strlcpy(join, s1, sizeof(s1));
	ft_strlcpy(join + ft_strlen(s1), s2, sizeof(s2));
	return (join);
}

/* int	main(void)
{
	char	*join;
	char s1[15] = "Buenas";
	char *s2 = "tardes";

	join = ft_strjoin(s1, s2);
	printf("%s\n", join);
	free(join);
	return (0);
} */
