#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    char temp, in[n][2][4];
    for (int i = 0; i < n ; i++){
        scanf("%s %s", in[i][0], in[i][1]);
        temp = in[i][0][0];
        in[i][0][0] = in[i][1][0];
        in[i][1][0] = temp; 
    }

    for (int i = 0; i < n ; i++){
        printf("%s %s\n", in[i][0], in[i][1]);
    }
}