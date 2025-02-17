#include <stdio.h>
int main() {
int n;
 scanf("%d",&n);
    int t=1;
    for(int i=1;i<=n;++i){
        if(i==1) printf("<%d",t);
        else printf(" %d",t);
        t*=2;
        
        }
    if(n!=0) printf(">"); 
} 