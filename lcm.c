#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a,b,j;
    scanf("%d %d ",&a,&b);
    for(int i=1;i<=a && b;i++){
        if(a%i==0 && b%i==0){
            j=i;    
        }
    }
    int l=(a*b)/j;
    printf("%d",l);
    return 0;
}
