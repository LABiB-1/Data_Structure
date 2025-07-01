#include<stdio.h>
int main(){
    int a[7], i, j,temp;
    printf("Ënter numbers: ");
    for(i=0;i<=7;i++){
        scanf("%d", &a[i]);
    }
    for(i=1;i<7;i++){
        temp =a[i];
        for(j=i-1;j>=0 && a[j]>temp;j--){
            a[j+1]=a[j];
        }
        a[j+1]=temp;
    }
    printf("Sorted array: ");
    for(i=0;i<7;i++){
        printf("%d ", a[i]);
    }
}
