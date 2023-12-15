#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	if (str)
	{
		while (str[i] != '\0')
			i++;
	}
	return (i);
}

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i])
		{
			if (str[i] == c)
				return (1);
			i++;
		}
	}
	return (0);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t		i;
	size_t		j;
	char	*join;

	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!join)
		return (NULL);
	i = 0;
	j = 0;
	if (s1)
	{
		while (s1[i] != '\0')
			join[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
		join[j++] = s2[i++];
	join[j] = 0;
	free(s1);
	return (join);
}

char	*read_str(char *str, int fd)
{
	int		fst;
	int		rd;
	char	*buffer;

	fst = 1;
	rd = 1;
	buffer = malloc(sizeof(char) * (BUFFER + 1));
	while (fst || (!ft_strchr(buffer, '\n') && rd))
	{
		fst = 0;
		rd = read(fd, buffer, BUFFER);
		if (rd == -1)
		{
			free(buffer);
			free(str);
			return (NULL);
		}
		buffer[rd] = 0;
		str = ft_strjoin(str, buffer);
	}
	free(buffer);
	return (str);
}

char	*ft_substr(char *str, int start, int len)
{
	int		i;
	char		*sub;

	if (start >= (int)ft_strlen(str))
		return (NULL);
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (str[start] && i <= len)
		sub[i++] = str[start++];
	sub[i] = 0;
	return (sub);
}

int	next_line(char *str)
{
	int	i;

	i = 0;
	if (str)
	{
		while (str[i] && str[i] != '\n')
			i++;
	}
	return (i + 1);
}

char	*get_next_line(int fd)
{
	int			nl;
	char		*line;
	char		*str;
	char static	*buffer;

	if (fd < 0 || BUFFER <= 0)
		return (NULL);
	str = read_str(buffer, fd);
	if (!str)
	{
		buffer = NULL;
		return (NULL);
	}
	nl = next_line(str);
	buffer = ft_substr(str, nl, ft_strlen(str) - nl);
	line = ft_substr(str, 0, nl);
	free(str);
	return (line);
}
