#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char temp, str[n][101];
    for (int i = 0; i < n ; i++){
        scanf("%s", str[i]);

        for (int j = 0; j < strlen(str[i]); j++){       // changing p with q & vice bera
            str[i][j] = ((str[i][j] == 'p')? 'q' : (str[i][j] == 'q')? 'p' : 'w');
        }

        for (int j = 0; j < strlen(str[i])/2; j++){     // reversing string
            temp = str[i][j];
            str[i][j] = str[i][strlen(str[i]) - 1 - j];
            str[i][strlen(str[i]) - 1 - j] = temp;
        }
    }

    for (int i = 0; i < n ; i++){
        printf("%s\n", str[i]);
    }
}