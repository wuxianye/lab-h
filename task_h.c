#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    // Get user input
#define N 256
    char buffer[N + 1],
        * filename = buffer;
    char ch;
    int i = 0; // counter for how many characters read
    printf("Enter a file name: ");
    while ((ch = getchar()) != '\n' && i < N) { // get one character at a time
        filename[i++] = ch;
    }
    filename[i] = '\0';

    if (i == 0 || i >=N) {
        printf("Error!");
        return EXIT_FAILURE;
    }

    char* ext = strrchr(filename, '.');
    if (ext == NULL || ext == filename) {
        printf("Error!");
    }
    else {
        printf("%s", ext);
    }

    return EXIT_SUCCESS;
}