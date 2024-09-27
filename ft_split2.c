/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:52:19 by frnavarr          #+#    #+#             */
/*   Updated: 2024/09/26 18:36:04 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	subs = malloc((len + 1) * sizeof(char));
	if (!subs)
		return (NULL);
	i = 0;
	while (i < len)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	subs[i] = '\0';
	return (subs);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int		words = word_count(s, c);
	char	**result = ft_calloc(words + 1, sizeof(char *));

	if (!s)
		return (NULL);
	if (!result)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			int			len;
			const char	*start;

			start = s;
			len = 0;
			while (*s && *s != c)
			{
				len++;
				s++;
			}
			result[i++] = ft_substr(start, 0, len);
		}
		else
		{
			s++;
		}
	}
	result[i] = NULL;
	return (result);
}
/* int main(void)
{
char	**split_result = ft_split("Hola mundo, esto es C", ' ');

	for (int i = 0; split_result[i]; i++)
	{
		printf("%s\n", split_result[i]);
		free(split_result[i]);
	}

	free(split_result);
	return (0);
}
 */