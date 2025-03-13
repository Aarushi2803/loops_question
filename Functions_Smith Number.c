// A Smith number is a composite number where the sum of its digits is equal to the sum of the digits of its prime factors (excluding the number itself).
// Write a function is_smith_number(n) that returns 1 if the given number n is a Smith number, otherwise returns 0.

// Solutions
#include <stdio.h>
int is_smith_number(int n) {
    
int sum1=0,sum2=0,large;
    int new = n,new1 = n;
    // last digit ka sum 
    while(n!=0){   
        large = n%10;
        sum1+=large;
          
         n/=10;
    } 
  
//prime factor sum
 for(int i=2;i<=new;i++){
     while(new%i==0){
         if(i==new1) {
             return 0; 
         }
//          jese 23 aayega prime to 2+3
         int i2 = i,sum3=0;
         while(i2!=0){
             int large1= i2%10;
                 sum3+=large1;  
              i2/=10; 
           }  
         
         
         sum2+=sum3; 
         new/=i;   
     }
 }
 if(sum1==sum2){
     return 1;
    }   
    else {
      return 0;  
    }

}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", is_smith_number(n));
    return 0;
}