#include <math.h>
#include <stdio.h>

int main()
{
    int n, m, a;
    scanf("%d %d %d", &n, &m, &a);

    printf("%lld", (long long) (ceil(n / (double) a) * ceil(m / (double) a)));
}