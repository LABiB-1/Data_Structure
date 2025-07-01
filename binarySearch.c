#include<stdio.h>
int main(){
    int a[7], k, i, mid, start=0, end=6;
    printf("Ënter numbers: ");
    for(i=0;i<=7;i++){
        scanf("%d", &a[i]);
    }
    mid=(start+end)/2;
    printf("Enter number to search: ");
    scanf("%d", &k);

    while(start<=end){
        mid=(start+end)/2;
    if(k==a[mid]){
        printf("Item found");
        return 0;
    }
    else if(k>a[mid]){
        start = mid+1;
    }
    else
        end = mid-1;
    }
    printf("Item not found");
    return 0;
}
