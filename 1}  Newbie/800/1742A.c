#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b, c;
    char ans[n + 1];
    for (int i = 0; i < n ; i++){
        scanf("%d %d %d", &a, &b, &c);
        ans[i] = (((a == b + c) || (b == a + c) || (c == a + b))? 'Y' : 'N');
    }

    for (int i = 0; i < n; i++){
        printf("%s\n", (ans[i] == 'Y')? "YES" : "NO");
    }
}