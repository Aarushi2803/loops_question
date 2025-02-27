#include <stdio.h>
int main() {   
int n,prime_two=0,prime_one=0,flag=1;
    scanf("%d",&n);
    if(n==1){
        printf("2");
        return 0;
    }
    
    for(int i=2;i*i<=n;i++){
     if(n%i==0) {
         flag=0;
         break;
     }
    }
    if(flag==1){
        printf("%d",n);
        return 0;
    }
    
 for(int i=n+1; ;i++){
   flag=1;
    for(int j=2;j*j<=i;j++){
     if(i%j==0){ 
          flag=0; 
         break;
     } 
     
    }
     if(flag==1){
         prime_one = i; 
         break;
     } 
 } 
       
 for(int i=n-1;i>=2;i--){
   flag=1;
    for(int j=2;j*j<=i;j++){
     if(i%j==0){ 
         flag=0;
         break;
     }
    }
     if(flag==1){
         prime_two = i;
         break;
     
    } 
 }
    int diff1= prime_one-n;
    int diff2= n-prime_two;
    if(diff1==diff2){
        printf("%d",prime_two);
     }
 else {
     if(diff1>diff2){
     printf("%d",prime_two);
 } 
    else{ 
        printf("%d",prime_one);
        }
 }
    return 0;
}