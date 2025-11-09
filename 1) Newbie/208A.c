#include <stdio.h>
#include <string.h>

int main()
{
    char str[201];
    scanf("%s", str);

    char out[201];
    int index = 0;
    for (int i = 0; i < strlen(str); i++){
        if ((i <= (strlen(str) - 3)) && (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B')){
            i += 2;     // effecively i += 3 in next iteration
            
            if ((index != 0) && (out[index - 1] != ' ')){
                out[index] = ' ';
                index++; 
            }
        }
        else{
            out[index] = str[i];
            index++;
        }
    }
    out[index] = '\0';

    printf("%s", out);
}