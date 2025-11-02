#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int c = 0;
    while(1){
        c++;

        if      (n >= 100) { n -= 100; } 
        else if (n >= 20 ) { n -= 20;  }
        else if (n >= 10 ) { n -= 10;  }
        else if (n >= 5  ) { n -= 5;   }
        else               { n -= 1;   }

        if (n == 0){ 
            printf("%d", c); 
            return 0;
        }
    }
}