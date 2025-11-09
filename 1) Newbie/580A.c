#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int a, prev = 0, currMax = 0, allMax = 0; 
    for (int i = 0; i < t; i++){
        scanf("%d", &a);

        if (a >= prev){ currMax++; }
        else{ 
            if (currMax > allMax){ allMax = currMax; }
            currMax = 1;
        }
        prev = a;
    }
    if (currMax > allMax){ allMax = currMax; }

    printf("%d", allMax);
}