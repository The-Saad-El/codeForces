#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);

    strcpy(str, strlwr(str));
    char out[201];
    int index = 0;
    for (int i = 0; i < strlen(str); i++){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){ continue; }
        else{
            out[index] = '.';
            out[index + 1] = str[i];
            index += 2;
        }
    }
    out[index] = '\0';

    printf("%s", out);
}