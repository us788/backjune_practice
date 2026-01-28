#include <stdio.h>
#include <string.h>


int main(){
    int a,b;
    scanf("%d",&a);
    
    int arr[a];
    
    for(int i = 0; i<a ; i++){
        scanf("%d",&arr[i]);
    }
    int min = 1000;
    int index = 0;
    int tempindex= 0;
    int temp = 0;
    for(int i = 0; i<a ; i++){
        while(index<a){
            if(min>arr[index]){
                min = arr[index];
                tempindex = index;
            }
            index++;
        }
        temp = arr[i];
        arr[i] = min;
        arr[tempindex] = temp;
        index = i+1;
        min = 1000;

        printf("%d\n",arr[i]);
    }
    return 0;
}