#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char a[100];
    fgets(a,sizeof(a),stdin);
    puts(a);
    return 0;
}
