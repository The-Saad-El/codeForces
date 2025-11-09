#include <stdio.h>
#include <math.h>

int main()
{
    int x[3];
    scanf("%d %d %d", &x[0], &x[1], &x[2]);

    int t;
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < (3 - 1 - i); j++){
            if (x[j] > x[j + 1]){
                t = x[j];
                x[j] = x[j + 1];
                x[j + 1] = t;
            }
        }
    }
    
    printf("%d", (x[2] - x[0]));    // ie (x[2] - x[1]) + (x[1] - x[0])
}