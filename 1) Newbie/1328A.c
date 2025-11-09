#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    long long a, b, out[t];
    for (int i = 0; i < t ; i++){
        scanf("%lld %lld", &a, &b);
        
        if      ((a % b) == 0) { out[i] = 0; }              // a already divisible by b
        else if (b > a)        { out[i] = b - a; }          // b > a
        else                   { out[i] = b - (a % b); }    // a > b    {courtesy: DefNotEbbi}
    }

    for (int i = 0; i < t ; i++){
        printf("%lld\n", out[i]);
    }
}