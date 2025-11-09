#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[4], s[n];
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < 4; j++){ scanf("%d", &a[j]); }

        s[i] = 0;
        for (int j = 1; j < 4; j++){ if (a[j] > a[0]){ s[i]++; } }
    }

    for (int i = 0; i < n; i++){ printf("%d\n", s[i]); }
}