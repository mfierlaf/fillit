#include "fillit.h"

int	test(char *line)
{
	int cpt;
	int i;
	int k;
	int j;
	int n;

	cpt = 0;
	k = 0;
	j = 0;
	n = 0;
	if (line[20] != '\0' && line[20] != '\n')
		return (0);
	while (n < 21)
	{
		i = 0;
		while (line[n] != '\0' && line[n] != '\n')
		{
			if (line[n] != '.' && line[n] != '#')
				return (0);
			tab[k][i] = line[n];
			if (line[n] == '#')
			{
				cpt++;
				if (n != 21 && line[n] == line[n + 1])
					j++;
				if (n != 0 && line[n] == line[n - 1])
					j++;
				if (n > 5 && line[n] == line[n - 5])
					j++;
				if (n < 15 && line[n] == line[n + 5])
					j++;
			}
			n++;
			i++;
		}
		n++;
		k++;
	}
	if (cpt != 4 || i != 4 || k != 5)
		return (0);
	if (j == 6 || j == 8)
		return (1);
	else
		return (0);
}
