#include <stdio.h>

int main()
{
    int n, m, a, b;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    if (b/(float)m < (float)a){            // special ticket is gud value
        int f;
        f = (n / m) * b;
        f += (((n % m) * a) < b)? (n % m) * a : b;        // getting the cheaper of the 2
        printf("%d", f);
    }
    else{ printf("%d", a*n); }
}