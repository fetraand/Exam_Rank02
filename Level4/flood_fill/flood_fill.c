#include "flood_fill.h"

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
