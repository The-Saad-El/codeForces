#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c, d[n];
    for (int i = 0; i < n ; i++){
        scanf("%d %d %d", &a, &b, &c);
        d[i] = ((a > b && b > c) || (c > b && b > a)? b : (a > c && c > b) || (b > c && c > a)? c : a);
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", d[i]);
    }
}