#include <math.h>
#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    char n[6];
    int count;
    for (int i = 0; i < t ; i++){
        scanf("%s", n);

        count = 0;
        for (int j = 0; j < strlen(n); j++){
            if (n[j] != '0'){ count++; }
        }
        printf("%d\n", count);

        for (int j = 0; j < strlen(n); j++){
            if (n[j] != '0'){ printf("%d ", ((n[j] - '0') * (int) pow(10, strlen(n) - j - 1))); }
        }
        printf("\n");
    }
}