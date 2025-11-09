#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n = 0;
    while (1){
        n++;
        if (log2(t) == (double)((int)log2(t))){ 
            printf("%d", n); 
            return 0; 
        }
        else{ t -= pow(2, (int)log2(t)); }
    }
}