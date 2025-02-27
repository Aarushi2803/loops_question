#include <stdio.h>
int main() {
int n,new,ld=0;
scanf("%d",&n);
    int rev=n;
while(n!=0){ 
  new=n%10;
     ld=ld*10+new;
    n/=10; }
if(ld==rev)   printf("YES");

    else printf("NO");
    
    
}