#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int l, val;
    char s[11], out[n], timur[] = "Timur";
    for (int i = 0; i < n ; i++){
        scanf("%d", &l);
        scanf("%s", s);

        if (l != 5){ out[i] = 'N'; }
        else{
            val = 1;
            for (int j = 0; j < 5; j++){
                for (l = 0; l < 5; l++){        // reusing l :D
                    if (s[l] == timur[j]){ break; }
                    if (l == 4){ 
                        out[i] = 'N';
                        val = 0; 
                    }
                }
                if (!val) { break; }
            }
            if (val){ out[i] = 'Y'; }
        }
    }

    for (int i = 0; i < n; i++){
        printf("%s\n", (out[i] == 'Y')? "YES" : "NO");
    }
}