#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c[n];
    for (int i = 0; i < n ; i++){
        scanf("%d", &a);

        int d[10] = {0};
        for (int j = 0; j < a; j++){
            scanf("%d ", &b);
            d[b - 1]++;
        }

        c[i] = 0;
        for (int j = 0; j < 10; j++){
            if (d[j] >= 3){
                c[i] = (j + 1);
                continue;
            }
            else if ((j == 9) && (c[i] == 0))
            { c[i] = -1; }
        }
    }

    for (int i = 0; i < n ; i++){
        printf("%d\n", c[i]);
    }
}