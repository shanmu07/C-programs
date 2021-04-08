#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d",&a);
    if (a%3==0 && a%5==0){
        printf("HiHello");
    }

    else if (a%3==0){
        printf("Hi");
    }
    else if (a%5==0){
        printf("Hello");
    }

    return 0;
}
