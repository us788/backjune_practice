#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(){
    int a,b;
    scanf("%d %d",&a, &b);
    char matrix[a][b];
    char tmat[8][8];
    char ref1[8][8];
    char ref2[8][8];
    int count1=0;
    int count2=0;
    int min=64;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                ref1[i][j] = 'W';
            } else {
                ref1[i][j] = 'B';
            }
        }
    }
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            if ((i + j) % 2 == 0) {
                ref2[i][j] = 'B';
            } else {
                ref2[i][j] = 'W';
            }
        }
    }
    for(int i= 0 ; i<a ; i++ ){
        char str[b];
        scanf("%s", str);
        for(int j = 0 ; j<b ; j++){
            matrix[i][j]=str[j];
        }
    }

    for(int i= 0 ; i<a ; i++ ){
        for(int j = 0 ; j<b ; j++){
            if(a-i>=8){
              if(b-j>=8){
                for(int k = i ; k<i+8 ; k++){
                    for(int w = j; w<j+8 ; w++){
                        if(matrix[k][w]!=ref1[k-i][w-j]){
                            count1++;
                        }
                        if(matrix[k][w]!=ref2[k-i][w-j]){
                            count2++;
                        }
                        
                    }
                }
                if(count1>=count2){
                    if(min>=count2){
                        min = count2;
                    }
                }else{
                    if(min>=count1){
                        min = count1;
                    }
                }
                count1 = 0;
                count2 = 0;
              }

            }
        }
    }

    printf("%d\n", min);

}

