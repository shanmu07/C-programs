#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        if(n==i*i){
            printf("Yes");
            return 0;
        }    
    }
    printf("No");
    return 0;
}
