// Aakash is fascinated by numbers and how they transform under various operations. He discovered an interesting operation called Rotating Digits and wants to write a function to process numbers accordingly.

// Rotating Digits has two operatons:

// Right Rotation: It is performed by shifting the digit in the one's place to the leftmost and shifting all other digits right by 1 unit.
// Left Rotation: It is performed by shifting the leftmost digit to one's place and shifting all other digits left by 1 unit.
// image

// A number is transformed based on the following rules:

// If the number has three or more digits and is a palindrome or a prime, follow these special rules:

// If it is a palindrome, rotate its digits right by two positions.
// If it is a prime, rotate its digits left by two positions.
// If it is both prime and a palindrome, keep it unchanged.
// Otherwise:

// If the number is even, rotate its digits right by one position.
// If the number is odd, rotate its digits left by one position.
// Write a program to perform the following operation on the given number N.

// Note: Each testcase contains multiple inputs as numbers.

#include <stdio.h>
int palindrome(int);
int prime(int);
int digitCount(int);
int rightShift(int,int);
int leftShift(int,int);
int main() {
   int q;
    scanf("%d",&q);
   for(int i=0;i<q;i++){
       int index,res;
       scanf("%d",&index);
       
       
           int palindromeCheck = palindrome(index);
           int primeCheck = prime(index);
           if((palindromeCheck+primeCheck == 2) && (index>99)){
               res = index;
           }
           else if((palindromeCheck == 1)  && (index>99)){
                res = rightShift(index,2);
           }
           else if(primeCheck == 1   && (index>99)){
               res = leftShift(index,2);
           }
           else if(index%2 == 0)
           res = rightShift(index,1);
           
           else 
               res = leftShift(index,1);
           // }
       printf("%d\n",res);
   }
    
    return 0;
}

int palindrome(int index){
    int copy = index;
    int rev = 0;
    while(copy!=0){
        int ld = copy%10;
        rev = rev*10 + ld;
        copy/=10;
    }
    if(rev == index){
        return 1;
    }
    return 0;   
}
int prime(int index){
    for(int i=2;i*i<=index;i++){
        if(index%i == 0){
            return 0;
        }
    }
    return 1;
}
int digitCount(int index){
    int count=1;
    while(index!=0){
        index/=10;
        count*=10;
    }
    return count/10;
}
int rightShift(int index,int n){
    int count = digitCount(index);
    for(int i=1;i<=n;i++){
        int ld = index%10;
        index/=10;
        index = count*ld + index;
    }
    return index;
}
int leftShift(int index,int n){
    int count = digitCount(index);
    for(int i=1;i<=n;i++){
        int fd = index/count;
         index = (index%count)*10 + fd;
    }
      return index;
    
}