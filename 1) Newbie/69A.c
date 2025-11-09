#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int i, j, k, sumI = 0, sumJ = 0, sumK = 0;
    for (int l = 0; l < t ; l++){
        scanf("%d %d %d", &i, &j, &k);

        sumI += i;
        sumJ += j;
        sumK += k;
    }

    printf("%s", ((sumI == 0) && (sumJ == 0) && (sumK == 0))? "YES" : "NO");
}