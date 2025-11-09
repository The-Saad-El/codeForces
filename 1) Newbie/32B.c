#include <stdio.h>
#include <string.h>

int main()
{
    char b[201];
    scanf("%s", b);

    int r = 0;
    char out[strlen(b)];
    for (int i = 0; i < strlen(b); i++){
        if (b[i] == '.'){ 
            out[r] = '0';
            r++;
        }
        else if ((b[i] == '-') && (b[i + 1] == '.')){
            out[r] = '1';
            i++;
            r++;
        }
        else{
            out[r] = '2';
            i++;
            r++;
        }
    }

    for (int i = 0; i < r; i++){
        printf("%c", out[i]);
    }
}