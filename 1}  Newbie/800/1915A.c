#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c, d[n];
    for (int i = 0; i < n ; i++){
        scanf("%d %d %d", &a, &b, &c);
        d[i] = (a == b)? c : (a == c)? b : a;
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", d[i]);
    }
}