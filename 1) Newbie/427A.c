#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int c, pol = 0, cri = 0;
    for (int i = 0; i < n ; i++){
        scanf("%d", &c);

        if (c == -1){       // crime
            if (pol > 0){ pol --; }
            else{ cri++; }
        }
        else{ pol += c; }
    }

    printf("%d", cri);
}