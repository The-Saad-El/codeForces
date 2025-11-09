#include <stdio.h>

int main()
{
    long long k, n;
    scanf("%lld %lld", &k, &n);

    long long numOdd = k / 2 + ((k % 2 == 0)? 0 : 1);           // if k is odd, numOdd++

    if   (n <= numOdd) { printf("%lld", -1 + (2 * n));     }    // algebraic progression for odds from 1 
    else               { printf("%lld", 2 * (n - numOdd)); }
}