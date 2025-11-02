#include <stdio.h>

int main()
{
    int k, r;
    scanf("%d %d", &k, &r);

    int c = 0, s = k;
    while (++c){
        if (((s % 10) == 0) || (((s - r) % 10) == 0))
        { break; }
        else
        { s += k; }
    }

    printf("%d", c);        // or s/k
}