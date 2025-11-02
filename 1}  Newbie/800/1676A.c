#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char s[7], arr[n];
    for (int i = 0; i < n ; i++){
        scanf("%s", s);
        arr[i] = (((s[0] + s[1] + s[2]) == (s[3] + s[4] + s[5]))? 'Y' : 'N');
    }

    for (int i = 0; i < n; i++){
        printf("%s\n", ((arr[i] == 'Y')? "YES" : "NO"));
    }
}