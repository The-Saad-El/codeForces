#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int pass[n];
    for (int i = 0; i < n; i++){ pass[i] = i + 1; }

    int a, b;
    scanf("%d", &a);
    for (int i = 0; i < a; i++){
        scanf("%d", &b);
        for (int i = 0; i < n; i++){
            if (pass[i] == b){
                pass[i] = 0;
                break;
            }
        }
    }
    
    scanf("%d", &a);        // reusing
    for (int i = 0; i < a; i++){
        scanf("%d", &b);
        for (int i = 0; i < n; i++){
            if (pass[i] == b){
                pass[i] = 0;
                break;
            }
        }
    }

    int iBecome = 1;
    for (int i = 0; i < n; i++){
        if (pass[i] != 0){
            iBecome = 0;
            break;
        }
    }

    printf("%s", (iBecome)? "I become the guy." : "Oh, my keyboard!");
}