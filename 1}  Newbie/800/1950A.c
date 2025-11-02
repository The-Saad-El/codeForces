#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c;
    char d[n];
    for (int i = 0; i < n ; i++){
        scanf("%d %d %d", &a, &b, &c);
        d[i] = ((a < b && b < c)? 'S' : (a < b && b > c)? 'P' : 'N');
    }

    for (int i = 0; i < n; i++){
        printf("%s\n", (d[i] == 'S')? "STAIR" : (d[i] == 'P')? "PEAK" : "NONE");
    }
}