#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, run, move, arr[n];
    for (int i = 0; i < n ; i++){
        scanf("%d %d", &a, &b);

        run = 1, move = 0;
        while (run){
            for (int j = 10; j >= 1; j--){
                if (a == b){ 
                    arr[i] = move;
                    run = 0;
                    break;
                }
                else{
                    if ((a + j) > b){ continue; }
                    else{
                        a += j;
                        move++;
                        break;
                    }
                }
            }
        }
    }

    for (int i = 0; i < n ; i++){
        printf("%d\n", arr[i]);
    }
}