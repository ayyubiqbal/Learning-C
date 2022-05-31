#include <stdio.h>

int main(){
    int i, marks, count;
    int total_marks [] = {88,92,86,91,82,92,84,86,88,90};
    for(marks = 80; marks <= 100; marks++){
        count = 0;
        for(i = 0; i < 10; i++){
            if(total_marks[i] == marks){
                count++;
            }
        }
    if(count > 0){
        printf("Marks: %d count: %d\n", marks, count);
        }
    }
    return 0;
}