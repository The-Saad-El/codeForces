#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int hashed, hashFirst = 0;
    for (int i = 0; i < n; i++){
        hashed = 0;
        for (int j = 0; j < m; j++){
            if (i % 2 == 1){        // if line is odd
                if (hashFirst && !hashed && (j == 0)){ printf("#"); hashFirst = 0; hashed = 1; }
                else if (!hashFirst && !hashed && (j == m-1)){ printf("#"); hashFirst = 1; hashed = 1; }
                else { printf("."); }
            }   
            else{       // even numbered line
                printf("#"); 
            }
        }
        printf("\n");
    }
}