#include <stdio.h>
#include <stdlib.h>

int cmp(const void* a, const void* b){
    return (*(int*)b - *(int*)a);       // descending sort
}

int main()
{
    int t;
    scanf("%d", &t);

    int arr[t], sum = 0;
    for (int i = 0; i < t ; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    qsort(arr, t, sizeof(int), cmp);
    
    int count = 0, mySum = 0;
    for (int i = 0; i < t, mySum <= sum/2; count++, i++){       // ehh, not my style
        mySum += arr[i];
    }

    printf("%d", count);
}