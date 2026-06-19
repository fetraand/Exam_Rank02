#include <unistd.h>

void    inter(char *s1, char *s2)
{
    int i;
    int j;
    int seen[256];

    i = 0;
    while(i < 256)
        seen[i++] = 0;
    i = 0;
    while(s1[i])
    {
        j = 0;
        while(s2[j] && s1[i] != s2[j])
            j++;
        while(s2[j] && !seen[(unsigned char)s1[i]])
        {
            write(1, &s1[i], 1);
            seen[(unsigned char)s1[i]] = 1;
        }
        i++;
    }
}

int main(int argc, char *argv[])
{
    if(argc == 3)
        inter(argv[1], argv[2]);
    write(1, "\n", 1);
    return (0);
}