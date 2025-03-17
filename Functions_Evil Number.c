// An Evil Number is a number that has an even number of 1s in its binary representation.
// Write a function is_evil_number(n) that returns 1 if the number n is an Evil Number and 0 otherwise.

#include <stdio.h>
int is_evil_number(int n){
    
int rem=0,count=0;
    while(n>0){
     rem=n%2;
     if(rem == 1){
        count++; 
    } 
    n/=2;
    }
 // return (count%2==0)?1:0; 
    if(count%2==0) return 1;
    else  return 0;
}    

int main() {
    int n;
    scanf("%d", &n); 
    printf("%d\n", is_evil_number(n));
    return 0;
}