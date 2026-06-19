#include <stdlib.h>
#include <stdio.h>

// 1. DÉFINITION DE LA STRUCTURE
typedef struct  s_point
{
    int         x;
    int         y;
}               t_point;

// 2. TES FONCTIONS (FLOOD_FILL)
void	fill(char **tab, t_point size, t_point cur, char target)
{
	if (cur.x < 0 || cur.x >= size.x || cur.y < 0 || cur.y >= size.y)
		return ;
	if (tab[cur.y][cur.x] != target)
		return ;

	tab[cur.y][cur.x] = 'F';

	fill(tab, size, (t_point){cur.x + 1, cur.y}, target);
	fill(tab, size, (t_point){cur.x - 1, cur.y}, target);
	fill(tab, size, (t_point){cur.x, cur.y + 1}, target);
	fill(tab, size, (t_point){cur.x, cur.y - 1}, target);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char	target;

	target = tab[begin.y][begin.x];
	fill(tab, size, begin, target);
}











void fill(char **tab, t_point size, t_point cur, char target)
{
	if(cur.x < 0 || cur.x >= size.x || cur.y < 0 || cur.y >= size.y)
		return;
	if(tab[cur.y][cur.x] != target)
		return;
	tab[cur.y][cur.x] = 'F';
	fill(tab, size, (t_point){cur.x + 1, cur.y}, target);
	fill(tab, size, (t_point){cur.x - 1, cur.y}, target);
}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	char target;
	target = tab[begin.y][begin.x];
	fill(tab, size, begin, target);
}




char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}