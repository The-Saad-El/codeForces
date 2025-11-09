#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int t[n][2];
    for (int i = 0; i < n; i++){
        scanf("%d %d", &t[i][0], &t[i][1]);
    }

    int g = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if      (i == j){ continue; }
            else if (t[i][0] == t[j][1]){ g++; }
        }
    }

    printf("%d", g);
}