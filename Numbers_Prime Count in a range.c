



#include <stdio.h>
int main() {

int a,b,j,flag2=1,count=0;
scanf("%d %d",&a,&b);
if(a==1) a=2;
  for(int i=a;i<=b;i++){
//     if(i<=1){
//         continue;
//     }  
     int flag=1;
      for(j=2;j*j<=i;j++){
          if(i%j==0 ){  
              flag = 0;
              break;
          }
      }
  if(flag==1){
      printf("%d ",i);
    count++; 
   flag2=0;
  }  
  }  
if(flag2==0)
 printf("\n%d",count);   
else
    printf("0");
return 0;
}