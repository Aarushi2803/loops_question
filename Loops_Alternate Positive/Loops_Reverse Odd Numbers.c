#include <stdio.h>
int main() {
int n; 
scanf("%d",&n);
for(int i=1;i<=n;++i){
    if(i==n) printf("1.");
    else printf("%d ",2*(n-i+1)-1);
} 
}    