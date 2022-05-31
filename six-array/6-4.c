// gcc -o output file-name.c 
#include <stdio.h>

int main(){
    int array[5]= {10,20,30,40,50};
    int i;
    for ( i = 4; i >= 0; i--)
    {
    printf("%d\n", array[i]);
    }
    return 0;
}