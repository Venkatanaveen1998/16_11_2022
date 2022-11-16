#include <stdio.h>
int main()
{
    int n, msb;
    printf("Enter any number: ");
    scanf("%d", &n);
    msb = 1 << (32 - 1);
    if(n & msb)
        printf("MSB of %d is set (1).", n);
    else
        printf("MSB of %d is unset (0).", n);
}


