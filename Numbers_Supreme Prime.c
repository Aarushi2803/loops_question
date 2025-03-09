// A number N is called a Supreme Prime if:

// N is a prime number.
// The sum of its digits is also a prime number.
// Given an integer N, write a program to determine whether it is a Supreme Prime or not.


#include <stdio.h>
int main() {
    
int n; 
scanf("%d",&n);
 int copyn=n,flag=0,sum=0;  
    if(n==0 || n==1){
        printf("NO");
    }
    else{
            for(int i=2;i*i<=n;i++){ 
           if(n%i==0){
               printf("NO");
               return 0;
           }
       }
           if(flag==0){
              while(copyn!=0){
                   int rem=copyn%10;
                    sum+=rem; 
                   copyn/=10;
              }

        for(int i=2;i*i<=sum;i++){ 
           if(sum%i==0){
               printf("NO");
               flag=1;
               break;
           }
       }
         if(flag==0){
             printf("YES");
         }         


       }
    }
   
    return 0;
}