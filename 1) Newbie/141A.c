#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    int alpha[26] = {0};
    for (int i = 0; i < 2; i++){
        scanf("%s", str);

        for (int j = 0; j < strlen(str); j++){
            alpha[str[j] - 65]++;           // 65 = ascii('A')
        }   
    }

    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++){
        if (alpha[str[i] - 65] == 0){ 
            printf("NO");
            return 0;
        }
        else{ alpha[str[i] - 65]--; }
    }   

    for (int i = 0; i < 26; i++){
        if (alpha[i] != 0){
            printf("NO");
            return 0;
        }
        if (i == 25){
            printf("YES");
        }
    }   
}