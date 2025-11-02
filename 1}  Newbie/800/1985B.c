#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b[n][2], c;
    for (int i = 0; i < n ; i++){
        scanf("%d", &a);

        b[i][0] = b[i][1] = 0;
        for (int j = 2; j <= a; j++){
            c = j;
            
            while (c < a){
                c += j;
                if (c > a){ 
                    c -= j;
                    break;
                }
            }

            if (c > b[i][1]){
                b[i][0] = j;
                b[i][1] = c;
            }
        }
    }

    for (int i = 0; i < n ; i++){
        printf("%d\n", b[i][0]);
    }
}