#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int cit[n], max = -999;
    for (int i = 0; i < n ; i++){
        scanf("%d", &cit[i]);
        if (cit[i] > max){ max = cit[i]; }
    }

    int toSpend = 0;
    for (int i = 0; i < n; i++){
        toSpend += max - cit[i];
    }

    printf("%d", toSpend);
}