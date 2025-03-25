#include <stdio.h>
int fact(int);
int main(){
 int n;
 scanf("%d",&n);
 
 int res = fact(n);
 
 printf("%d",res);
    return 0;
}

int fact(int n){
for(int i=1;i<=n;i++){
    if(n==1) return 1;
    else return n*fact(n-1);
}     
}