#include <stdio.h>
#include <math.h>
int main() {
    
int n,count=0,sum=0; 
scanf("%d",&n);
    int new=n,n1=n;
   while(n!=0){
        n = n/10;
             count++;
       
    }
  while(n1!=0){
      int rem = n1%10;
   sum+=  pow(rem,count); 
        n1 = n1/10; 
  } 
   if(new==sum){
       printf("YES");
   }   
      else printf("NO");  
    return 0;
}