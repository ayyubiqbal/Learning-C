// gcc -o output file-name.c 
#include <stdio.h>

int main(){
    int array[5]= {45,543,657,34,32};
    printf("%d\n", array[-1]);
    printf("%d\n", array[5]);
    printf("%d\n", array[100]);
    return 0;
}