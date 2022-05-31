#include <stdio.h>

int main(){
    int ft_marks[10] = {87,90,85,79,80,89,78,82,91,92};
    int st_marks[10] = {85,86,89,90,83,97,86,88,91,90};
    int final_marks[10] = {90,95,84,97,83,91,86,87,84,90};
    double total_marks[10];
    int i;
    for ( i = 0; i < 10; i++){
        total_marks[i] = ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
    }
    for ( i = 1; i <= 10; i++){
        printf("Roll No: %d\tTotal Marks: %0.0lf\n", i, total_marks[i-1]);
    }
    return 0;  
    
}