#include <stdio.h>
#include <string.h>

char non_repeating_character(char string[]) {

    char c;
    int repeated;

    size_t N = strlen(string);

    for (size_t i = 0; i < N; i++) {
        
        repeated = 0;
        
        for (size_t j = 0; j < N; j++) {
            if (string[i] == string[j] && i != j) {
                repeated = 1;
                break;
            }
        }

        if (repeated == 0) {
            c = string[i];
            break;
        }
    }

    return c;
}


int main() {

    char string[] = "geeksorgeeks";

    char c = non_repeating_character(string);

    printf("First repeating Character: %c\n", c);

    return 0;
}