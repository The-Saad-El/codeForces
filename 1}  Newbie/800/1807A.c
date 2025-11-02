#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c;
    char arr[n];
    for (int i = 0; i < n ; i++){
        scanf("%d %d %d", &a, &b, &c);
        arr[i] = ((c == (a + b))? '+' : '-'); 
    }

    for (int i = 0; i < n; i++){
        printf("%c\n", arr[i]);
    }
}