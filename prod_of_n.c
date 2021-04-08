#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf ("%d",&n);
    int prod=1;
    for (int i=1;i<=n;i++){
        prod=prod*i;
    }
    printf ("%d",prod);
    return 0;

}
