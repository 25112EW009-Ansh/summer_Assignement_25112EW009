#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int i, count = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; sentence[i] != '\0'; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\n' || sentence[i] == '\t') {
            if (i > 0 && sentence[i - 1] != ' ' && sentence[i - 1] != '\t') {
                count++;
            }
        }
    }

    if (count > 0 || (strlen(sentence) > 1 && sentence[0] != '\n')) {
        printf("Total number of words: %d\n", count);
    } else {
        printf("Total number of words: 0\n");
    }

    return 0;
}
