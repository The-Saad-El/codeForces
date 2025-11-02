#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    long long a, b, c, ans[n];
    for (int i = 0; i < n; i++){
        scanf("%lld %lld", &a, &b);

        c = 0;
        while (1){
            if ((a % b) == 0){ 
                ans[i] = c; 
                break;
            }
            else{
                a++; 
                c++;
            }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%lld\n", ans[i]);
    }
}