#include <stdio.h>

int main()
{
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);

    int drinks = (k * l) / nl;
    int limes = (c * d);
    int salts = (p / np);
    
    printf("%d",    (drinks < limes && drinks < salts)? drinks/n :
                    (limes < drinks && limes < salts)? limes/n :
                    (salts/n)
            );
}