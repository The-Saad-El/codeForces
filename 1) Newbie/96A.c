#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);

    for (int i = 0; i < strlen(str) ; i++){
        for (int j = 1; j <= 6; j++){
            if (str[i] != str[i + j]){ break; }
            if (j == 6){ 
                printf("YES");
                return 0;
            }
        }
    }

    printf("NO");
}