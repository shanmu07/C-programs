#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,rem,arr[50],i=0;
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        arr[i]=rem;
        i++;
        n/=10;
    }
    for(int j=0;j<i;j++){
        printf("%d ",arr[j]);
    }

    return 0;
}
