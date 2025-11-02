#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    int l, out[n];
    for (int i = 0; i < n ; i++){
        scanf("%d", &l);

        char str[l + 1];
        scanf("%s", str);

        out[i] = l;
        for (int j = 0; j < l/2; j++){
            if   (((str[j] == '0') && (str[l-1-j] == '1')) || ((str[j] == '1') && (str[l-1-j] == '0'))){ out[i] -= 2; }
            else { break; }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%d\n", out[i]);
    }
}