#include <stdio.h>

int isPrime(int numToCheck){
    for (int i = 2; i <= numToCheck/2; i++){
        if ((numToCheck % i) == 0){ return 1; }
    }
    return 0;
}

int main()
{
    int t;
    scanf("%d", &t);

    int num2;
    for (int i = 2; i <= t/2; i++){
        if (isPrime(i)){
            num2 = t - i;
            if (isPrime(num2)){ 
                printf("%d %d", i, num2); 
                return 0;
            }
        }
    }
}