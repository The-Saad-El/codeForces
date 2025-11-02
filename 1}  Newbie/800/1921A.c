#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);

    int x1, y1, x2, y2, a[n];
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < 4; j++){
            if (j == 0){ scanf("%d %d", &x1, &y1); }
            else{ scanf("%d %d", &x2, &y2); }

            if (x1 == x2){ a[i] = (pow(x2 - x1, 2) + pow(y2 - y1, 2)); }     // finding length of one side and then squaring it to find area (l^2)
        }
    }

    for (int i = 0; i < n ; i++){
        printf("%d\n", a[i]);
    }
}