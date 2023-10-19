#include "gnl.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (i);
	else
		while (str[i])
			i++;
	return (i);
}

int	numbering_nline(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i + 1);
}

int	ft_strchr(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_strjoin(char *s1, char *s2)
{
	char	*join;
	int		i;
	int		j;

	i = 0;
	j = 0;
	join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!join)
		return (NULL);
	if (s1)
		while (s1[i])
			join[j++] = s1[i++];
	i = 0;
	while (s2[i])
		join[j++] = s2[i++];
	join[j] = 0;
	free(s1);
	return (join);
}

char	*ft_substr(char *str, int start, int len)
{
	int		i;
	char	*substr;

	i = 0;
	if (start >= (int)ft_strlen(str))
		return (NULL);
	substr = (char *)malloc(sizeof(char) * len + 1);
	if (!substr)
		return (NULL);
	while (str[start] && i < len)
		substr[i++] = str[start++];
	substr[i] = 0;
	return (substr);
}

char	*reading_str(char *str, int fd)
{
	int		fst;
	int		rd;
	char	*buffer;

	fst = 1;
	rd = 1;
	buffer = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (fst || (!ft_strchr(buffer, '\n') && rd))
	{
		fst = 0;
		rd = read(fd, buffer, BUFFER_SIZE);
		if (rd == -1)
		{
			free(buffer);
			free(str);
			return (NULL);
		}
		buffer[rd] = 0;
		str = ft_strjoin(str, buffer);
	}
	free (buffer);
	return (str);
}

char	*get_next_line(int fd)
{
	int			nl;
	char		*str;
	char		*line;
	static char	*buffer;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	str = reading_str (buffer, fd);
	if (!str)
	{
		buffer = NULL;
		return (NULL);
	}
	nl = numbering_nline(str);
	buffer = ft_substr(str, nl, ft_strlen(str) - nl);
	line = ft_substr(str, 0, nl);
	free(str);
	return (line);
}
