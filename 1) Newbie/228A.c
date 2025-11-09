#include <stdio.h>

int main()
{
    int a, b = 0, arr[4] = {-1, -1, -1, -1};

    for (int j = 0; j < 4; j++){
        scanf(" %d", &a);

        for (int i = 0; i < 4; i++){
            if (arr[i] == a){ break; }
            else if (i == 3){
                arr[b] = a;
                b++;
            }
        }
    }

    int c = 4;
    for (int i = 0; i < 4; i++){
        if (arr[i] != -1){ c--; }
    }

    printf("%d", c);
}