#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n ; i++){
        scanf("%d ", &a[i]);
    }

    int sP = 0, dP = 0, move = 1, minIndex = 0, maxIndex = n - 1;
    while (minIndex <= maxIndex){
        if (move){
            if (a[minIndex] > a[maxIndex]){
                sP += a[minIndex];
                minIndex++;
            }
            else{
                sP += a[maxIndex];
                maxIndex--;
            }
            move = 0;
        }
        else{
            if (a[minIndex] > a[maxIndex]){
                dP += a[minIndex];
                minIndex++;
            }
            else{
                dP += a[maxIndex];
                maxIndex--;
            }
            move = 1;
        }
    }

    printf("%d %d", sP, dP);
}