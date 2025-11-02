#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[4];
    int b[n];
    for (int i = 0; i < n ; i++){
        scanf("%s", a);
        b[i] = (a[0] - '0') + (a[2] - '0');
    }

    for (int i = 0; i < n ; i++){
        printf("%d\n", b[i]);
    }
}