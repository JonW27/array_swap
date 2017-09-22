#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int arr1[10];
    int i;
    srand(time(NULL));
    for(i = 0; i < 9; i++){
        arr1[i] = rand();
    }
    arr1[9] = 0;
    printf("First Array:\n");
    for(i = 0; i < 10; i++){
        printf("arr[%d]: %d\n", i, arr1[i]);
    }
    int arr2[10];
    printf("Second Array:\n");
    for(i = 0; i < 10; i++){
        int *p = &arr1[9-i];
        printf("arr[%d]: %d\n", i, *p);
    }
}