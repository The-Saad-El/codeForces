#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n ; i++){
        scanf("%d", &arr[i]);
        arr[i] = ((arr[i] >= 1900)? 1 : (arr[i] >= 1600)? 2 : (arr[i] >= 1400)? 3 : 4);
    }

    for (int i = 0; i < n; i++){
        printf("Division %d\n", arr[i]);
    }
}