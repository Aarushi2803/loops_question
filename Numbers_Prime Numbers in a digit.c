#include <stdio.h>
int main() {
    
long long int n; 
scanf("%lld",&n);
    if(n<0) {
        n = - n;
    }
 int count=0;   
 while(n!=0){
       int last = n%10;
      if(last==2 || last==3 || last==5 || last==7){
          count++;   
      }
       n = n/10;
  }
    printf("%d",count);   
    return 0;
}