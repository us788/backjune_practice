#include <stdio.h>
#include <string.h>

int main(){
    int arr[5];
    int sum = 0;
    for(int i = 0 ; i<5; i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int min = 100;
    int temparr =0;
    for(int i  = 0; i<5 ; i++){
        for(int j = i ; j<5 ; j++){
            if(arr[j]<min){
                min = arr[j];
                temparr = j;
            }
        }
        arr[temparr]=arr[i];
        arr[i] = min;
        min = 100;
    }
    printf("%d\n%d",sum/5,arr[2]);
    

}