#include <stdio.h>
int main() {
int n,sum=0;
scanf("%d",&n);
 for(int i=2;i<=n;i++){
     while(n%i==0){   
         sum+=i; 
         n=n/i;   
     }
 }
    printf("%d",sum);    
}  