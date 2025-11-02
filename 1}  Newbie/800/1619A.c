#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[101], out[n];
    for (int i = 0; i < n ; i++){
        scanf("%s", str);

        if ((strlen(str) % 2) == 1){ out[i] == 'N';}
        else{
            for (int j = 0; j < strlen(str)/2; j++){
                if (str[j] != str[strlen(str)/2 + j]){
                    out[i] = 'N';
                    break;
                }
                if (j == ((strlen(str)/2)-1)){ out[i] = 'Y'; }
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%s\n", (out[i] == 'Y')? "YES" : "NO");
    }
}