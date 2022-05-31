#include <stdio.h>

int main(){
        int array[] = {10,20,30,40,50};
        int i, j, temp;
        for ( i = 0, j = 4; i < j; i++, j--){
            temp = array[j];
            array[j] = array[i];
            array[i] = temp;
        }
        for(i = 0; i < 5; i++){
            printf("%d\n", array[i]);
        }
        
}