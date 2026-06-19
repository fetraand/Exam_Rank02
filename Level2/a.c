#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char result;
    int i;

    i = 0;
    result = 0;
    while(i <= 7)
    {
        result = (result << 1) | (octet & 1);
        octet = octet >> 1;
        i++;
    }
    return (result);

}

int main(void)
{
    unsigned char c = 160;
    printf("%d", reverse_bits(c));   // Doit donner 00000101
    
    return (0);
}