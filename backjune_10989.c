#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int compare(const void *a, const void *b);

int main(){
    int a;
    scanf("%d", &a);
    int b,c;
    int index = 0;
    int arr[10];
    while(a!=0){
        arr[index]=a%10;
        index++;
        a=a/10;
    }
    qsort(arr,index, sizeof(int), compare);

    for (int i = 0; i < index; i++){
        printf("%d", arr[i]);
    }

}
int compare(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}
