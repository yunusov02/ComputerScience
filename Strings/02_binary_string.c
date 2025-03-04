#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>


char *addBinary(char *a, char *b) {
    int len1 = strlen(a);
    int len2 = strlen(b);

    int carry = 0;
    int i = len1 - 1, j = len2 - 1;

    int maxLen = len1 > len2 ? len1 : len2;

    char *result = (char *)malloc((maxLen + 1) * sizeof(char));

    result[maxLen] = '\0';

    while (i >= 0  || j >= 0) {

        int sum = carry;

        if (i >= 0) sum += a[i--] - '0';
        if (j >= 0) sum += b[j--] - '0';

        carry = sum >> 1;
        result[--maxLen] = (sum & 1) + '0';
        
    }

    if (carry) {
        result = (char*)realloc(result, (strlen(result) + 2) * sizeof(char));
        memmove(result + 1, result, strlen(result) + 1);
        result[0] = '1';
    }

    return result;
    
}


int main() {
    char a[] = "101";
    char b[] = "1101";
    char *result = addBinary(a, b);
    printf("Sum of %s and %s is %s\n", a, b, result);
    free(result); // free memory allocated for result string
    return 0;
}