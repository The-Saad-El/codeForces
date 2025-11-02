#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c, d[n];
    for (int i = 0; i < n ; i++){
        scanf("%d %d %d", &a, &b, &c);
        d[i] = (((a + b >= 10) || (b + c >= 10) || (a + c >= 10))? 1 : 0);
    }

    for (int i = 0; i < n ; i++){
        printf("%s\n", (d[i] == 1)? "YES" : "NO");
    }
}