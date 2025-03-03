#include <stdio.h>
int main() {
    
long long int n;
    
scanf("%lld",&n);
    int new =n,sum=0;
   for(int i=1;i<=n-1;i++){
       if(new%i==0){
           sum+=i;
       }
   }
    if(sum==n){
        printf("YES");
       }
    
       else{
        printf("NO");
   }   
    return 0;
}