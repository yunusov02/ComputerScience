#include <stdio.h>

int main() {
    char str[] = "Hello World";


    int i = 0;

    FILE *temp = tmpfile();

    if (temp == NULL) {
        printf("Unable to create temp file\n");
        return 0;
    }

    printf("Temporary file is created\n");

    while (str[i] != '\0') {
        fputc(str[i], temp);
        i++;
    }

    rewind(temp);

    while (!feof(temp)) {
        printf("%c", fgetc(temp));
    }
    return 0;
}