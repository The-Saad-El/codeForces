#include <stdio.h>

int main()
{
    int m, n;
    scanf("%d %d", &m, &n);
        
    char o;
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            scanf(" %c", &o);

            if ((o != 'B') && (o != 'W') && (o != 'G')){
                printf("#Color");
                return 0;
            }
        }
    }

    printf("#Black&White");
}