#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int out[t];
    for (int i = 0; i < t ; i++){
        scanf("%d", &out[i]);
        
        if (out[i] % 2 == 0) { out[i] = out[i]/2; }
        else { out[i] = (out[i]/2 + 1); }
    }

    for (int i = 0; i < t ; i++){
        printf("%d\n", out[i]);
    }
}