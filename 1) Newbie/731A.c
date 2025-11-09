#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
    char str[101];
    scanf("%s", str);

    int oneSide, otherSide, pointer = 'a', n = 0;
    for (int i = 0; i < strlen(str); i++){
        oneSide = abs(str[i] - pointer);
        otherSide = abs(oneSide - 26);
        n += (oneSide < otherSide)? oneSide : otherSide;

        pointer = str[i];
    }

    printf("%d", n);
}