#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,sum=0;
scanf("%d",&n);
    int new = n;
 while(n!=0){
     int rem= n%10; 
      sum+=rem;
     n/=10;  
} 
if(new%sum==0){
    printf("%d is a harshad number",new);
}
    else  printf("%d is not a harshad number",new);
    return 0;
}
