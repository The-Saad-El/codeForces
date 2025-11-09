#include <stdio.h>
#include <string.h>

int main()
{
    char s1[101], s2[101];
    scanf("%s %s", s1, s2);

    char out[strlen(s1) + 1];
    for (int i = 0; i < strlen(s1); i++){
        if (s1[i] == s2[i]){
            out[i] = '0';
        }
        else{
            out[i] = '1';
        }
    }
    out[strlen(s1)] = '\0';

    printf("%s", out);
}