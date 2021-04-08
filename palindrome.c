#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n, rev = 0, rem;
    scanf("%d", &n);
    int m=n;
    while (m != 0) {
        rem = m % 10;
        rev = rev * 10 + rem;
        m /= 10;
    }
    if (n==rev){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}
