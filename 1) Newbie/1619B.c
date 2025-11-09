#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n, out[t];
    for (int i = 0; i < t ; i++){
        scanf("%d", &n);
    
        out[i] = 0;
        for (int j = 1; j <= n; j++){
            if (sqrt(j) == (double)(int) sqrt(j)){ out[i]++; }
            else if (cbrt(j) == (double)(int) cbrt(j)){ out[i]++; }
        }
    }

    for (int i = 0; i < t ; i++){
        printf("%d\n", out[i]);
    }
}