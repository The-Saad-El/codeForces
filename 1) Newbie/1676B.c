#include <stdio.h>

int main()
{
    int testCases;
    scanf("%d", &testCases);

    int n, min, input[testCases][50], output[testCases];        // y did i choose so meaningful names...?
    for (int i = 0; i < testCases ; i++){
        scanf("%d", &n);
        
        min = 99999999;
        for (int j = 0; j < n; j++){
            scanf("%d", &input[i][j]);
            if (input[i][j] < min){ min = input[i][j]; }
        }

        output[i] = 0;
        for (int j = 0; j < n; j++){
            if (input[i][j] > min){
                output[i] += (input[i][j] - min);
            }
        }
    }

    for (int i = 0; i < testCases ; i++){
        printf("%d\n", output[i]);
    }
}