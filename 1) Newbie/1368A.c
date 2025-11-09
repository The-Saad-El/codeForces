#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int a, b, n, count1, count2, val, out[t];
    for (int i = 0; i < t ; i++){
        scanf("%d %d %d", &a, &b, &n);
        
        count1 = 0, val = a;
        while (val <= n){
            count1++;
            val += b;
        }
        count2 = 0, val = b;
        while (val <= n){
            count2++;
            val += a;
        }
        out[i] = ((count1 < count2)? count1 : count2);
    }

    for (int i = 0; i < t ; i++){
        printf("%d\n", out[i]);
    }
}