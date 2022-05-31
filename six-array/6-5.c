#include <stdio.h>

int main(){
    int array[] = {10,20,30,40,50};
    int arrayArr[5];
    int i, j;
    for(i = 0, j = 4; i < 5; i++, j--){
        arrayArr[j] = array[i];
    }
    for(i = 0; i < 5; i++){
        array[i] = arrayArr[i];
    }
    for ( i = 0; i < 5; i++){
        printf("%d\n", array[i]);
    }
    return 0;
}