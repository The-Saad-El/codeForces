#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    long long n[t];
    for (int i = 0; i < t; i++){
        scanf("%lld", &n[i]);
        n[i] = (n[i] % 2)? n[i]/2 : n[i]/2 - 1;         // had to analyse the ralationsip bw the inputs and outputs to figure this out
    }

    for (int i = 0; i < t; i++){
        printf("%lld\n", n[i]);
    }
}