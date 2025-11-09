#include <stdio.h>
#include <string.h>

int main()
{
    int num;
    scanf("%d", &num);

    char strNum[4];

    // checking if num itself is lucky
    sprintf(strNum, "%d", num);
    for (int j = 0; j < strlen(strNum); j++){
        if (strNum[j] != '4' && strNum[j] != '7'){ break; }
        if (j == (strlen(strNum) - 1)){
            printf("YES");
            return 0;
        }
    }

    // checking if num got any lucky factors
    for (int i = 4; i <= num/2 ; i++){
        sprintf(strNum, "%d", i);

        for (int j = 0; j < strlen(strNum); j++){
            if (strNum[j] != '4' && strNum[j] != '7'){ break; }
            if ((j == (strlen(strNum) - 1)) && ((num % i) == 0)){
                printf("YES");
                return 0;
            }
        }
    }

    printf("NO");
}