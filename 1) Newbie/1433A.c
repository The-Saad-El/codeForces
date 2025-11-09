#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char a[5];
    int b[n];
    for (int i = 0; i < n ; i++){
        scanf("%s", a);

        b[i] = 0;
        if (a[0] != '1'){ 
            b[i] += (10 * (a[0] - '1'));      // 10 presses per digit set
        }
        b[i] += ((strlen(a) == 4)? 10 : (strlen(a) == 3)? 6 : (strlen(a) == 2)? 3 : 1);
    }

    for (int i = 0; i < n ; i++){
        printf("%d\n", b[i]);
    }
}