#include <stdio.h>
int fibona(int);
int main(){
 int n;
 scanf("%d",&n);
 
 printf("%d",fibona(n));
    return 0;
} 

int fibona(int n){
for(int i=1;i<=n;i++){ 
    if(n==1 || n==0) return n;
    else return fibona(n-2)+fibona(n-1);
}     
}