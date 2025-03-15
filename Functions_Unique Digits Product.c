// Implement a function find_unique_digit_product(n) that returns the product of the unique digits 
// present in the given number n. The product should only consider distinct digits, ignoring any repeating digits.

// solutions
#include <stdio.h>
int find_unique_digit_product(int n){
 if(n==0) return 0;   
int pro=1;
for(int i=0;i<=9;i++){  
    int temp = n,count=0; 
    
while(temp>0){   
 int rem = temp % 10; 
    if(rem==i){
      count++;
    if(count==1){
        pro*=rem;
       break; 
    }
          
}
 temp/=10;       
}
}
return pro;   

}
int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", find_unique_digit_product(n));
    return 0;
}



