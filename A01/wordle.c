#include <stdio.h>
#include <string.h>
#include <time.h>
#include "words.h" // header that defined chooseWord()

int main() {
    srand(time(0));
    const char* word = chooseWord();
    printf("cheat: %s\n", word);

    char *guess = malloc(50 * sizeof(char));
    printf("Welcome to Wordle!\n");
    printf("Please enter a 5-letter word: ");
    scanf("%s", guess);
    int in_word;
    for (int i = 0; i < strlen(guess); i++) {
        // char c;
        in_word = 0;
        for (int j = 0; j < strlen(word); j++) {
            if (guess[i] == word[j]) { 
                in_word = 1;
                if (j != i) { printf("%c is in the word (but not in the correct spot)!\n", guess[i]); }
            }
        }
        if (in_word == 0) { printf("%c is NOT in the word.\n", guess[i]); }
    }

    return 0;
}
