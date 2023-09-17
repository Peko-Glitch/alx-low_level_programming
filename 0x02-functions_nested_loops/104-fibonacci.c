#include <stdio.h>

int main(void)
{
    unsigned long int a = 1;
    unsigned long int b = 2;
    unsigned long int temp;
    int count;

    printf("%lu", a);

    for (count = 1; count < 98; count++)
    {
        printf(", %lu", b);
        temp = a + b;
        a = b;
        b = temp;
    }

    printf("\n");

    return 0;
}

