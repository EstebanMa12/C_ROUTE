#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[] = "Hola$!!mundo$%!&timeskip";
    char word[100];  // Suponemos que ninguna palabra tendrá más de 100 caracteres
    char longestWord[100] = "";
    int longestWordLength = 0;
    int wordLength = 0;
    int inWord = 0;

    for (int i = 0; i < strlen(input); i++) {
        char c = input[i];

        // Verifica si el carácter es una letra válida (alfabeto)
        if (isalpha(c)) {
            if (!inWord) {
                inWord = 1;
                wordLength = 0;
            }
            word[wordLength++] = c;
        } else {
            if (inWord) {
                word[wordLength] = '\0';
                if (wordLength > longestWordLength) {
                    longestWordLength = wordLength;
                    strcpy(longestWord, word);
                }
                inWord = 0;
            }
        }
    }

    printf("La palabra más larga es: %s\n", longestWord);

    return 0;
}