#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "have a nice day";
    int len = strlen(str);
    for (int i = len - 1; i >= 0; i--) {
        if (str[i] == ' ') {
            printf("%s ", &str[i + 1]);
            str[i] = '\0'; 
        }
    }
    printf("%s\n", str);
    return 0;
}
