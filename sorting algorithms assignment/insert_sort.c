#include <stdio.h>

void swap (int *a, int *b){
    if (a == b) return; 
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main (){
    int arr [10]= {2,6,3,8,1,4,9,5,7,10};
    int i,j;
    for (i=1;i<10;i++){
        for (j=i;j>0 && arr[j]<arr[j-1];j--) {
            swap(&arr[j], &arr[j - 1]);
        }
    }
    for(int x=0;x<=9;x++){
        printf("%d\n",arr[x]);
    }
    return 0;
}