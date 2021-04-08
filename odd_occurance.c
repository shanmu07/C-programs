#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
    int n,a[100],k,i,j;
    printf("enter n: ");
    scanf("%d",&n);
    printf("enter array: ");
    for(i=0;i<n;i++){
        scanf("%d ",&a[i]);
    }
    int max=a[0];
    for(i=1;i<n;i++){
        k=a[i];
        if(k>max){
            max=k;
        }
    }
    int b[max+1];
    for(i=0;i<n;i++){
        int k=a[i];
        b[k]++;
    }
    for(i=0;i<(max+1);i++){
        int m=b[i];
        if(m%2 !=0){
            j=m;
        }
    }
    printf("%d",j);
    return 0;
}
