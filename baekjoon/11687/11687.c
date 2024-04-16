#include <stdio.h>

int main (void)
{
    int num;
    int n;

    scanf("%d", &num);
    
    n = num % 5;

    while (n != 0)
    {
        n /= 5;
        num += n;
    }

    printf("%d\n", num);

    return 0;
} 