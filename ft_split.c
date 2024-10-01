/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:15:35 by frnavarr          #+#    #+#             */
/*   Updated: 2024/10/01 16:12:31 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include "libft.h"

int	word_count (char const *s, char c)
{
	int	count;
	int	i;
	char *str;
	
	str = ft_strtrim(s, &c);
	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && str[i] != c)
			i++;
		if (str[i] == c)
		{
			count++;
			while (str[i] == c)
				i++;
		}
	}
	return (count + 1);
			
}

char **ft_split(char const *s, char c)
{
	char **split;
	size_t	res;
	res = word_count(s, c);
	
	split = (char **)malloc( res * sizeof(*char));
}

int main (void)
{
	int res;

	res = word_count("  Hola   cuantas palabras    hay", ' ');
	printf("%d", res);
	return (0);
} */