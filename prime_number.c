#include <stdio.h>
int main(){ 
int n,count=0;   
scanf("%d",&n); 
for(int i=2;count<n;i++){
   int flag=1;
for(int j=2;j*j<=i;j++){ 
 if(i%j==0){
    flag=0;
     break;
 } 
}
if(flag==1){ 
    count++;
    if(n==count){
printf("%d ",i); 
    }
} 
 
}
    return 0;
}