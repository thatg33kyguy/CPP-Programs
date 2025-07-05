#include<stdio.h>
int main(){
int i, n,k;
    scanf("%d %d", &n, &k );
        int  a[n],count=0;
    for(i=0; i<=n-1; i++){
        scanf("%d",&a[i]);
    }
 for(i=0; i<=n-1; i++){
    if(a[i]>=a[k-1] && a[i]>0){
        count++;
        }

    
    }
    printf("%d", count);
    return 0;
 }
