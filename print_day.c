#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    char arr[7][10]={"SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY","SATURDAY"};
    scanf ("%d",&n);
    if (n>=0 && n<=6){
        printf (arr[n]);
    }
    else{
        printf ("INVALID");
    }
    return 0;
}
