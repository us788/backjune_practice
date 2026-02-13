#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    int a;
    scanf("%d",&a);
    int arr[100001]={0};
    int l;
    for(int i = 0 ; i<a; i++){
        scanf("%d",&l);
        arr[l]++;
    }
    for(int i = 0 ; i<100001; i++){
        for(int j = 0; j<arr[i];j++){
            printf("%d\n",i);
        }
    }

}