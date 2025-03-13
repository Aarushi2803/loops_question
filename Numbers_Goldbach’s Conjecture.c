// Goldbach's Conjecture asserts that every even integer greater than 2 can be expressed as the sum of two prime numbers.

// Given an integer N, find the smallest prime pair of prime numbers (p, q) such that:

// p + q = N
// p and q are both prime numbers
// p is the smallest prime in the pair (i.e., p ≤ q)
// If no such pair exists, print "No Solution".

// Solutions
#include <stdio.h>
int main(){ 

int n; 
scanf("%d",&n); 
    
   if(n%2!=0 || n<=2) { 
       printf("No Solution");
       return 0;
   }
    
  for(int i=2;i<=n;i++){  
      int flag1=0;   
      for(int j=2;j*j<=i;j++){
          if(i%j==0){  
              flag1= 1; 
              break;  
          }  
      }  
  if(flag1==0){
      int  q = n-i;
      int flag2 =1;
      
      for(int k=2;k*k<=q;k++){
        if(q%k==0){
            flag2=0;
            break;
        }
    }
   if(flag2==1){
        printf("%d %d",i,q); 
       return 0;
       
   }   
  }
}
return 0;
} 