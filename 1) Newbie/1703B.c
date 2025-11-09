#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, index, c[n];
    char received[27];
    for (int i = 0; i < n ; i++){
        scanf("%d", &a);

        char str[a + 1];
        scanf("%s", str);

        index = 0, c[i] = 0;
        received[0] = '+';
        for (int j = 0; j < a; j++){
            for (int k = 0; k < strlen(received); k++){
                if (received[k] == str[j]){ 
                    c[i]++;
                    break; 
                }
                if (k == (strlen(received) - 1)){
                    received[index] = str[j];
                    received[index+1] = '\0';
                    index++;
                    c[i] += 2;
                }
            }
        }
    }

    for (int i = 0; i < n ; i++){
        printf("%d\n", c[i]);
    }
}