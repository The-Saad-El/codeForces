#include <math.h>
#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int n, groups[4] = {0};
    for (int i = 0; i < t ; i++){
        scanf("%d", &n); 
        groups[n - 1]++;
    }


    int numCars = groups[3];                   // 1 car each for each group of 4

    for (int i = 0; i < groups[2]; i++){       // for groups of 3
        if (groups[0] > 0){ groups[0]--; }     // making groups of 1 seat with each group of 3
        numCars++;
    }

    numCars += groups[1]/2;                    // 1 car each for each pair of groups of 2
    if (groups[1] % 2){
        numCars++;
        if      (groups[0] >= 2) { groups[0] -= 2; }
        else if (groups[0] == 1) { groups[0]--;    }
    }

    if (groups[0] > 0){ numCars += ceil((float) groups[0] / 4); }       // for remaining groups of 1


    printf("%d", numCars);
}