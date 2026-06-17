#include <stdio.h>
int main() {
    int total_rows;
    int current_number = 1;
    printf("Enter the number of rows to print: ");
    if (scanf("%d", &total_rows) != 1 || total_rows <= 0) {
        printf("Please enter a valid positive integer.\n");
        return 1;
    }
    for (int i = 1; i <= total_rows; i++) {
        int numbers_to_print = (2 * i) - 1;
        for (int j = 1; j <= numbers_to_print; j++) {
            printf("%d ", current_number);
            current_number++; 
        }

        printf("\n");
    }
    return 0;
}
