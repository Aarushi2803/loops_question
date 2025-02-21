#include <stdio.h>

int main() {

    double x;
    int n;
    scanf("%lf %d", &x, &n);
    double initial=x;
    double minimum=x;
    int i;
        
    for(i=1; i<=n; i++){
        if(i%2==0 && i%3==0){
            x=(x+0.7*x);
            i+=6;
        }
        else if(i%2==0){
            x=x-x/8;
        }
        else if(i%3==0){
            x=x-x/5;
        }
        else{
            x=x-0.1*x;
        }
        
        if(x<minimum){
            minimum=x;
        }
        if(x<0.4*initial){
            break;
        }
    }
    if(i<n){
        printf("Stopped early after %d days: %.2lf", i, x);
    }
    else{
        i=n;
        printf("After %d days: %.2lf", i, x);
    }
    
    printf("\nMinimum amount held by Bhaskar: %.2lf", minimum);
    
    if(x>0.7*initial){
        printf("\nLucky Bhaskar");
        }
    else{
        printf("\nBetter Luck Next Time!");
        }
    return 0;
}
