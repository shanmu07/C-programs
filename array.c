#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int min(int A[], int n){
    int min=A[0];
    for (int i=1;i<n;i++){
        int k=A[i];
        if (k<min){
            min=k;
        }
    }
    return min;
}

int max(int A[], int n){
    int max=A[0];
    for (int i=1;i<n;i++){
        int k=A[i];
        if (k>max){
            max=k;
        }
    }
    return max;

}

int sum(int A[],int n){
    int sum=0;
    for (int i=0;i<n;i++){
        sum=sum + A[i];
    }
    return sum;
}
int main() {

    int n;
    scanf("%d",&n);
    int A[n];
    for (int i=0;i<n;i++){
        scanf ("%d",&A[i]);
    }
    int x=min(A,n);
    printf ("Min=%d\n",x);
    int y=max(A,n);
    printf ("Max=%d\n",y);
    int z=sum(A,n);
    printf ("Sum=%d\n",z);
    float avg=z/n;
    printf ("Avg=%f\n",avg);

    return 0;
}
