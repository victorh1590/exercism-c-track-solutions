#include "armstrong_numbers.h"

bool is_armstrong_number(int candidate) {
    // Get number length.
    int length = snprintf(NULL, 0, "%d", candidate);
    char* str = (char*)malloc(sizeof(char) * (length + 1));
    // Convert int to string.
    sprintf(str,"%d", candidate);
    int sum = 0;

    for(int i = 0; i < length; i++) {
        int value = str[i] - '0';
        sum += (int)pow(value, length);
    }

    free(str);
    return (sum == candidate);
}
