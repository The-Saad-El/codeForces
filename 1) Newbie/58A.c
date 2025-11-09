#include <stdio.h>
#include <string.h>

int main()
{
    char s[101];
    scanf("%s", s);

    int h = 0, e = 0, l1 = 0, l2 = 0;
    for (int i = 0; i < strlen(s); i++){
        if (!h){
            if (s[i] == 'h'){ h = 1; continue; }
        }
        if (h && !e){
            if (s[i] == 'e'){ e = 1; continue; }
        }
        if (e && !l1){
            if (s[i] == 'l'){ l1 = 1; continue; }
        }
        if (l1 && !l2){
            if (s[i] == 'l'){ l2 = 1; continue; }
        }
        if (l2){
            if (s[i] == 'o'){ 
                printf("YES");
                return 0;
            }
        }
    }

    printf("NO");
}