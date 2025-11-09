#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int d;
    int r[n];
    for (int i = 0; i < n; i++){
        scanf("%d", &d);
        r[d - 1] = i + 1;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", r[i]);
    }
}