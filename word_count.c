#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "A.txt";
    int word_count = 0;
    int in_word = 0;
    char ch;

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            if (in_word) {
                word_count++;
                in_word = 0;
            }
        } else {
            in_word = 1;
        }
    }
    // If file ends with a word (no trailing space), count it
    if (in_word) {
        word_count++;
    }

    fclose(file);

    printf("Number of words in %s: %d\n", filename, word_count);

    return 0;
}
