#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int max = 0;
    if (max < (a + b + c))   { max = (a + b + c); }
    if (max < (a * b * c))   { max = (a * b * c); }
    if (max < ((a * b) + c)) { max = ((a * b) + c); }
    if (max < ((a + b) * c)) { max = ((a + b) * c); }
    if (max < (a + (b * c))) { max = (a + (b * c)); }
    if (max < (a * (b + c))) { max = (a * (b + c)); }

    printf("%d", max);
}