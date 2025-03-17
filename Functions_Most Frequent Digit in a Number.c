// Implement a function find_most_frequent_digit(n) that returns the 
// most frequent digit in a given number n. If there is a tie in frequency, return the largest of those digits.

// solutions

#include <stdio.h>
int find_most_frequent_digit(int n) {
    if(n==0) return 0;
    int original = n,i,max_fre=0,max=0,count,rem=0; 
for(i=0;i<=9;i++){
  n = original;
   count = 0;
    while(n>0){
        rem = n % 10;
        if(rem==i){
            count++;
        } 
        n/=10;
    }

if(count>max_fre){
    max_fre = count;
    max=i;       
}
    else if(count==max_fre && i>max){
        max=i;
    } 
}
 return max;            
   
}
int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", find_most_frequent_digit(n)); 
    return 0;
}
