#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b[n];
    for (int i = 0; i < n ; i++){
        scanf("%d", &a);

        b[i] = 0;
        for (int j = 1; j < a; j++){
            for (int k = 1; k < a; k++){
                if (a == (j + k)){ b[i]++; }
            }
        }
    }

    for (int i = 0; i < n ; i++){
        printf("%d\n", b[i]);
    }
}