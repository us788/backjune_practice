#include <stdio.h>
#include <string.h>

int main(){
    int n,k;

    scanf("%d %d",&n,&k);
    int arr[n+1];
    int a;
    
    for(int i = 0; i<n ; i++){
        scanf("%d",&a);
        int j = i-1;
        while(j>=0&&arr[j]<a){
            arr[j+1]= arr[j];
            j--;
        }
        arr[j+1] = a;

    }
     printf("%d", arr[k-1]);
}
