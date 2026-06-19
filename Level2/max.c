#include <stddef.h> // Pour NULL
#include <stdio.h>

int	max(int *tab, unsigned int len)
{
    unsigned int	i;
    int				result;

    if (len == 0 || tab == NULL)
        return (0);
    result = tab[0];
    i = 1;
    while (i < len)
    {
        if (tab[i] > result)
            result = tab[i];
        i++;
    }
    return (result);
}

int main(void)
{
    int test1[] = {42, 12, 85, 23, 6};
    int test2[] = {-5, -42, -12, -2};
    int test3[] = {7};

    printf("Test 1 (Attendu 85) : %d\n", max(test1, 5));
    printf("Test 2 (Attendu -2) : %d\n", max(test2, 4));
    printf("Test 3 (Attendu 7)  : %d\n", max(test3, 1));
    printf("Test 4 (Attendu 0)  : %d\n", max(NULL, 0));

    return (0);
}
