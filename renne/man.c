#include <stdio.h>

int main() {
    int number = 81, reversed = 0, remainder;

    while (number != 0) {
        remainder = number % 10;        
        reversed = reversed * 10 + remainder; 
        number /= 10;                   
    }

    printf("Обернене число: %d\n", reversed);

    return 0;
}
