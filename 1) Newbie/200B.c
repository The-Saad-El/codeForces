#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int d, f = 0;
    for (int i = 0; i < n; i++){
        scanf("%d", &d);
        f += d;
    }

    printf("%.10lf", f / (double) n);
}