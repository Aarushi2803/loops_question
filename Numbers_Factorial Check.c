#include <stdio.h>
int main() {   
long long int n;
scanf("%lld",&n);
    
 int i=2;
   while(n>1){    
    if(n%i != 0){
        printf("NO");
        return 0;
    }  
       n/=i; 
    i++;
   }  
 printf("%d",i-1); 
    return 0;

}