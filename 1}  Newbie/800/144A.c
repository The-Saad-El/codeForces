#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int h[n];
    int max = -1000, min = 1000;
    for (int i = 0; i < n; i++){
        scanf(" %d", &h[i]);
        if (h[i] > max){ max = h[i]; }
        if (h[i] < min){ min = h[i]; }
    }

    int swaps = 0;
    for (int i = 0; i < n; i++){        // checking for max's index
        if (h[i] == max){ 
            int t;
            for (int j = i; j > 0; j--){      // swapping so max at first
                h[j] = h[j-1];
                h[j-1] = max;
            }
            break; 
        }
        swaps++;
    }

    for (int i = (n - 1); i > 0; i--){        // checking for the last min's index
        if (h[i] == min){ 
            int t;
            for (int j = i; j < (n - 1); j++){      // swapping so min at end
                h[j] = h[j+1];
                h[j+1] = min;
            }
            break; 
        }
        swaps++;
    }

    printf("%d", swaps);        // lillahi alhamd kulluhu
}