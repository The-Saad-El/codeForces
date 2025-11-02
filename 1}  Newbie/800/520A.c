#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char str[n+1];
    scanf("%s", str);

    if (n < 26){ printf("NO"); }
    else{
        strcpy(str, strlwr(str));
        int letterExists = 1;

        for (int i = 'a'; i <= 'z'; i++){
            for (int j = 0; j < n; j++){
                if (str[j] == i) { break; }
                if (j == (n - 1)){ letterExists = 0; }
            }
            if (!letterExists){ break; }
        }

        printf("%s", (letterExists)? "YES" : "NO");
    }
}