#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int h, m, out[t];
    for (int i = 0; i < t ; i++){
        scanf("%d %d", &h, &m);

        out[i] = (((24 - (h + 1)) * 60) + (60 - m));
    }

    for (int i = 0; i < t ; i++){
        printf("%d\n", out[i]);
    }
}