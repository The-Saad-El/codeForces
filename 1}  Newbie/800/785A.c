#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);

    char sh[13];
    int s = 0;
    for (int i = 0; i < n; i++){
        scanf("%s", sh);
        s += ((sh[0] == 'T')? 4 : (sh[0] == 'C')? 6 : (sh[0] == 'O')? 8 : (sh[0] == 'D')? 12 : 20);
    }

    printf("%d", s);
}