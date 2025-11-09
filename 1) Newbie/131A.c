#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);

    char str2[strlen(str) + 1];     // all caps string
    strcpy(str2, str);
    strupr(str2);

    char str3[strlen(str) + 1];     // str with first lcase and remaining caps
    strcpy(str3, str);
    strupr(str3);
    str3[0] += 32;      // 32 = diff bw ascii('A')& ascii('a');     uppercase to lowercase

    if (!strcmp(str, str2) || !strcmp(str, str3)){
        for (int i = 0; i < strlen(str); i++){
            printf("%c", (((str[i] >= 'A') && (str[i] <= 'Z'))? (str[i] + 32) : (str[i] - 32)));        // inverting case
        }
    }
    else{ printf("%s", str); }
}