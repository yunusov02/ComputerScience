#include <stdio.h>



void add_two_string(char string[], char word[]) {
    
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }

    int j = 0;
    while (word[i] != '\0') {
        string[i] = word[j];
        i++;
        j++;
    }    
}


int main() {

    char string[50] = "Hello ";
    char word[] = "World";

    add_two_string(string, word);

    printf("%s\n", string);

    return 0;
}