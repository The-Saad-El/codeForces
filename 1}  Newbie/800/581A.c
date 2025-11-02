#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int s1, s2;
    if (a > b){
        s1 = b;
        s2 = (a - b) / 2;
    }
    else{
        s1 = a;
        s2 = (b - a) / 2;
    }    

    printf("%d %d", s1 ,s2);
}