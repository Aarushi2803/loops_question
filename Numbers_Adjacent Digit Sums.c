// You are given two integers x and y. The variable t in this problem represents the number of test cases.

// Each test case is independent and consists of two numbers x and y. For every test case, the program must determine whether there exists an integer n such that:

// S(n) = x
// S(n+1) = y
// where S(a) denotes the sum of the digits of the number a in the decimal numeral system.

// The program processes each test case one after another and outputs either "Yes" (if such an n exists) or "No" (if no such n is found).


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

int n;
scanf("%d",&n);
    
for(int i=0;i<n;i++){
int x,y;
scanf("%d %d",&x,&y);
          
 if(x-y+1>=0 && (x-y+1)%9==0)
     printf("Yes\n");
    else  printf("No\n");   
}   
    return 0;
}
