#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int c = 0;
    while ((n / 2) >= 1){       // dividing by half continously until num < 1
        n /= 2;
        c++;
    }

    printf("%d", c);
}