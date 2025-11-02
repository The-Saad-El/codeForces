#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n], cfs[] = "codefrs";
    for (int i = 0; i < n ; i++){
        scanf(" %c", &arr[i]);
        
        for (int j = 0; j < 7; j++){    // 7 = strlen(cfs)
            if (cfs[j] == arr[i]){ 
                arr[i] = 'Y';
                break;
            }
            if (j == 6){ arr[i] = 'N'; }
        }
    }

    for (int i = 0; i < n ; i++){
        printf("%s\n", (arr[i] == 'Y')? "YES" : "NO");
    }
}