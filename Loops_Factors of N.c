#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
  int skip=0; 
for(int i=n;i>=1;i--){
   if(n%i == 0){
       if(i==n) printf("%d",i); 
      else if(!skip){
        printf(" %d",i);    
    } 
      skip =!skip;     
}  
}
 printf(".");  
   
}
 