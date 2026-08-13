#include <stdio.h>

void swap (int *a, int *b){
    if (a == b) return; 
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

int main (){
    int arr [10]= {2,6,3,8,1,4,9,5,7,10};
    for(int i=0;i<10;i++){
        int swaped=0;
        for(int j=0;j<(9-i);j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swaped=1;
            }
        }
        if(swaped==0){
            break;
        }
    }
    for(int x=0;x<=9;x++){
        printf("%d\n",arr[x]);
    }
    return 0;
}