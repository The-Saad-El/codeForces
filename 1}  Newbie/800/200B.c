    #include <stdio.h>
    
    int main()
    {
        int n;
        scanf(" %d", &n);
    
        int d;
        double f = 0.0;
        for (int i = 0; i < n; i++){
            scanf("%d", &d);
            f += (double) d;
        }
    
        printf("%.12lf", f / (double) n);
    }