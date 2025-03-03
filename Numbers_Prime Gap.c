#include <stdio.h>
int main() {   
int n,prime_two=0,prime_one=0;
    scanf("%d",&n);
    
 for(int i=n+1; ;i++){
  int flag=1;
    for(int j=2;j*j<=i;j++){
     if(i%j==0){ 
          flag=0; 
         break;
     } 
     
    }if(flag==1){
         prime_one = i; 
         // small = prime_one-n; 
         break;
     } 
 } 
       
 for(int i=n-1;i>=2;i--){
  int flag=1;
    for(int j=2;j*j<=i;j++){
     if(i%j==0){ 
         flag=0;
         break;
     }
    }
     if(flag==1){
         prime_two = i;
         // large =  n-prime_two;
         break;
     
    } 
 }
   printf("%d",prime_one-prime_two);   
    return 0;
}