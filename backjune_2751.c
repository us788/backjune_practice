#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void *a, const void *b);

int main(){
    int a,b;
    scanf("%d",&a);

    int arr[1000000];
    for(int i = 0 ; i<a ; i++){
        scanf("%d",&arr[i]);
    }

    qsort(arr,a,sizeof(int),compare);

    for(int i = 0 ; i<a ; i++){
        printf("%d\n",arr[i]);
    }
}

int compare(const void *_a, const void *_b){
    int* a = (int*) _a; 
	int* b = (int*) _b;
    if(*a>*b){
        return 1;
    }else{
        return -1;
    }
    return 0;
}