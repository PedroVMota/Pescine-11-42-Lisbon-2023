#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_sep_status(char a, char *charset)
{
	while (*charset)
	{
		if (a == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	ft_num_section(char *string, char *charset)
{
	int	i;
	int	section;

	section = 0;
	i = 0;
	if(!string)
		return 0;
	while (string[i])
	{
		if (ft_sep_status(string[i], charset) && string[i])
		{
			i++;
			continue ;
		}
		section += 1;
		while (!ft_sep_status(string[i], charset) && string[i])
			i++;
	}
	return (section);
}

void	ft_write_slot(char *slot, char *str, int size)
{
	int	i;

	i = -1;
	while (++i < size - 1)
		slot[i] = str[i];
	slot[i] = 0;
}

void	ft_string_split(char **target, char *str, char *charset)
{
	int	i;
	int	mi;
	int	ii;

	i = 0;
	mi = 0;
	while (str[i])
	{
		if (ft_sep_status(str[i], charset) && str[i])
		{
			i++;
			continue ;
		}
		ii = i;
		while (!ft_sep_status(str[i], charset) && str[i])
			i++;
		target[mi] = malloc(sizeof(char) * (i - ii + 1));
		ft_write_slot(target[mi], (str + ii), (i - ii + 1));
		mi++;
	}
}

char	**ft_split(char *str, char *charset)
{
	int		section;
	char	**target;

	section = ft_num_section(str, charset);
	target = malloc(sizeof(char *) * (section + 1));
	if (!target)
		return (0);
	target[section] = 0;
	ft_string_split(target, str, charset);
	return target;
}

int	main(void)
{
	char *str = "";
	char *seperator = " ,?";
	char **string_split = ft_split(str, seperator);

	int i = 0;

	while (string_split[i] != 0)
	{
		printf("[%d]: %s\n", i, string_split[i]);
		i++;
	}
	return (0);
}