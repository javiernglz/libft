/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frnavarr <frnavarr@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 17:15:35 by frnavarr          #+#    #+#             */
/*   Updated: 2024/10/04 16:27:06 by frnavarr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countstr(char const *s, char c)
{
	int		count;
	int		i;
	char	*str;

	str = ft_strtrim(s, &c);
	i = 0;
	count = 0;
	if (!str)
		return (0);
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
	free (str);
	return (count + 1);
}

static size_t	ft_subslen(char const *s, char c, int i)
{
	size_t	len;

	len = 0;
	while (s[i] && s[i] != c)
	{
		i++;
		len++;
	}
	return (len);
}

static void	ft_strfree(char **ptr)
{
	int	i;

	i = 0;
	while (ptr[i])
	{
		free(ptr[i]);
		ptr[i] = NULL;
		i++;
	}
	free(ptr);
	ptr = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		count;
	int		i;
	int		j;
	size_t	len;

	if (!s)
		return (NULL);
	count = ft_countstr(s, c);
	if (count == 0)
		return (NULL);
	split = (char **)malloc((count + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	i = 0;
	j = 0;
	while (s[i] && j < count)
	{
		while (s[i] == c)
			i++;
		len = ft_subslen(s, c, i);
		split[j] = ft_substr(s, i, len);
		if (!split[j])
			return (ft_strfree(split), NULL);
		i = i + len;
		j++;
	}
	split[j] = NULL;
	return (split);
}

/* int	main(void)
{
	char const	*s = "ggggggggggggggg";
	char		c;
	char		**res;
	int			i;

	c = 'g';
	i = 0;
	res = ft_split(s, c);
	while (res[i])
	{
		printf("%s\n", res[i]);
		i++;
	}
	ft_strfree(res);
	return (0);
}
 */