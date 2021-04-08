#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int digit = 0;
    while (n) {
        digit++;
        n /= 10;
    }
    printf("%d",digit);
    return 0;
}
