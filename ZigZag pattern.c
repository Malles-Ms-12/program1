#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void convertZigZag(const char* str, int n) {
    int len = strlen(str);
    if (n <= 1 || n >= len) {
        printf("%s\n", str);
        return;
    }
    char** rows = (char**)malloc(n * sizeof(char*));
    int* row_lens = (int*)calloc(n, sizeof(int));
    
    for (int i = 0; i < n; i++) {
        rows[i] = (char*)malloc((len + 1) * sizeof(char));
    }
    int curr_row = 0;
    int direction = 1;
    for (int i = 0; i < len; i++) {
        int pos = row_lens[curr_row];
        rows[curr_row][pos] = str[i];
        row_lens[curr_row]++;
        if (curr_row == 0) {
            direction = 1;
        } else if (curr_row == n - 1) {
            direction = -1;
        }

        curr_row += direction;
    }
    for (int i = 0; i < n; i++) {
        rows[i][row_lens[i]] = '\0'; 
        printf("%s", rows[i]);
        free(rows[i]);
    }
    printf("\n");
    free(rows);
    free(row_lens);
}

int main() {
    const char* input_str = "ABCDXYZ";
    int n = 3;
    printf("Input: str = \"%s\", n = %d\n", input_str, n);
    printf("Output: ");
    convertZigZag(input_str, n);
    return 0;
}
