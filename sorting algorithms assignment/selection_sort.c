#include <stdio.h>

void swap (int *a, int *b){
    if (a == b) return; 
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main (){
    int arr [10]= {2,6,3,8,1,4,9,5,7,10};
    int i, j,min;
    for(i=0;i<=9;i++){
        min = i;
        for(j=i+1;j<=9;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(&arr[i],&arr[min]);
    }
    for(int x=0;x<=9;x++){
        printf("%d\n",arr[x]);
    }
    return 0;
}