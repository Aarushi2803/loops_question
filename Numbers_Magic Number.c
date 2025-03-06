#include <stdio.h>
int main() {

int n;
scanf("%d",&n);
    
  int new=n; 
 while(n/10!= 0){
     int sum=0;
     while(n!=0){
   int rem=n%10; 
     sum+=rem;  
     n/=10;  
        
 }  
       n=sum;
 } 
   
 if(n==1){
     printf("%d is a magic number",new);
 }
    else  printf("%d is not a magic number",new);
    
    
    return 0;
}