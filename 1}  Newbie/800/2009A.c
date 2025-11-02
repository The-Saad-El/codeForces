#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c[n];
    for (int i = 0; i < n ; i++){
        scanf("%d %d", &a, &b);
        c[i] = b - a;
    }

    for (int i = 0; i < n ; i++){
        printf("%d\n", c[i]);
    }
}