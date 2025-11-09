#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char arr[n][4];
    for (int i = 0; i < n ; i++){
        scanf("%s", arr[i]);
        strcpy(arr[i], (!strcmp(strupr(arr[i]), "YES"))? "YES" : "NO");
    }

    for (int i = 0; i < n; i++){
        printf("%s\n", arr[i]);
    }
}