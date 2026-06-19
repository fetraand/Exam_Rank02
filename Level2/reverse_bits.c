
#include <unistd.h>

void print_bits(unsigned char octet)
{
    int i;

    i = 7;
    while(i >= 0)
    {
        if(((octet >> i) & 1) == 1)
            write(1, "1", 1);
        else
            write(1, "0", 1);
        i--;
    }
}

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
    unsigned char c = 160; // 10100000

    print_bits(c);
    write(1, "\n", 1);
    
    c = reverse_bits(c);   // Doit donner 00000101
    print_bits(c);
    write(1, "\n", 1);
    
    return (0);
}
