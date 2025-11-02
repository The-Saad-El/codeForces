#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[11];
    int out[n];
    for (int i = 0; i < n ; i++){
        out[i] = 0;
        for (int j = 0; j < 10; j++){
            scanf("%s", str);

            for (int k = 0; k < 5; k++){
                if (str[k] == 'X'){
                    out[i] += (k + 1);
                }
                if (str[9 - k] == 'X'){
                    out[i] += (k + 1);
                }
            }
        }
    }

    for (int i = 0; i < n ; i++){
        printf("%d\n", out[i]);
    }
}
