#include <stdio.h>
#include <string.h>

int main()
{
    int a[4];
    for (int i = 0; i < 4 ; i++){
        scanf("%d ", &a[i]);
    }

    char str[100001];
    scanf("%s", str);

    int cal = 0;
    for (int i = 0; i < strlen(str); i++){
        cal += a[str[i] - '1'];
    }

    printf("%d", cal);
}