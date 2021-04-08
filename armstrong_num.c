#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n,rem,res=0;
    scanf("%d",&n);
    int m=n;
    while(m!=0){
        rem=m%10;
        res+=rem*rem*rem;
        m/=10;
    }
    if (res==n){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
