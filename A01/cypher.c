#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void cipher(char* word, int key);

int main() {
    char* word;
    int key;
    printf("Enter a word: ");
    scanf("%s", word);
    printf("Enter a shift: ");
    scanf("%d", &key);
    cipher(word, key);
    printf("Your cipher is %s\n", word);
}

void cipher(char* word, int key) {   
    for (int i = 0; i < strlen(word); i++) {
        word[i] = (word[i] - 97 + key);
        if (word[i] < 0) { word[i] += 26; }
        word[i] %= 26;
        word[i] += 97;
    }
}