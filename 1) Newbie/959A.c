#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int player = 1;
    while (1){
        if (n <= (player)? 1 : 0){
            printf("%s", (player)? "Ehab" : "Mahmoud");
            return 0;
        }
        else{
            for (int i = n; i >= 1 ; i--){
                if ((i % 2) == (player)? 0 : 1){
                    n -= i;
                    break;
                }
            }
            player = (player)? 0 : 1;
        }
    }
}