#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[5], b, c[n];     // a input array, b temp char var, c output array
    for (int i = 0; i < n ; i++){
        scanf("%s", a);
        
        for (int j = 0; j < strlen(a); j++){        // sorting input array
            for (int k = 0; k < (strlen(a) - 1 - j); k++){
                if (a[k] > a[k + 1]){
                    b = a[k];
                    a[k] = a[k + 1];
                    a[k + 1]= b;
                }
            }
        }
        c[i] = a[0]; 
    }

    for (int i = 0; i < n ; i++){
        printf("%c\n", c[i]);
    }
}