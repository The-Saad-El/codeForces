#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, max, min, amazing = 0;
    for (int i = 0; i < n ; i++){
        scanf("%d ", &a);

        if (i == 0){
            max = a;
            min = a;
            continue;
        }

        if (a > max){
            max = a;
            amazing++;
        }
        else if (a < min){
            min = a;
            amazing++;
        }
    }

    printf("%d", amazing);
}