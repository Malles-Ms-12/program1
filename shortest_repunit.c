#include <stdio.h>
int main() {
    int x = 13; 
    printf("Testing input value: %d\n", x);
    if (x % 10 != 3 && x % 10 != -3) {
        printf("Error: The number must have 3 as its last digit.\n");
        return 1;
    }
    int divisor = x < 0 ? -x : x;
    int remainder = 0;
    int digit_count = 0;
    do {
        remainder = (remainder * 10 + 1) % divisor;
        digit_count++;
    } while (remainder != 0);
    printf("The shortest number has %d ones.\n", digit_count);
    return 0;
}
