#include <stdio.h>
#include <string.h>

int main()
{
    char line[1001];
    fgets(line, sizeof(line), stdin);       // i hate u scanf
    line[strlen(line) - 1] = '\0';
    
    int count = 0, alphabets[26] = {-1};        // initializing alphabets with arbitrary int 
    for (int i = 1; i < (strlen(line) - 1); i += 3){
        if (alphabets[line[i] - 'a'] == 1){ continue; }     // already added
        else{
            alphabets[line[i] - 'a'] = 1;
            count++;
        }
    }

    printf("%d", count);
}