#include <stdio.h>
#include <string.h>

int main(){
    char word[] = "Computer";
    char guessed[20];
    char letter;
    char length = strlen(word);
    int attempts = 6;
    int found, i, j;

    //Initializing guessed word with underscores
    for(i = 0; i < length; i++){
        guessed[i] = '_';
    }
    guessed[length] = '\0';

    printf("===== HANGMAN GAME =====");

    while(attempts > 0 && strcmp(word, guessed)!=0){
        printf("\nWord: ");
        for(i = 0; i < length; i++){
            printf("%c ", guessed[i]);
        }

        printf("\n Attempts remaining: %d", attempts);
        printf("\nEnter a letter: ");
        scanf("%c", &letter);

        found = 0;

        //Checking if the letter exists
        for(i = 0; i < length; i++){
            if(word[i] == letter && guessed[i] == '_'){
                guessed[i] = letter;
                found = 1;
            }
        }

        if(found = 1){
            printf("Correct guess!\n");
        }
        else{
            printf("Wrong Guess!\n");
            attempts--;
        }
    }

    if ( strcmp(word, guessed) == 0){
        printf("Congratulations you won!\n");
        printf("The word was: %s\n", word);
    } else{
        printf("You lost!\n");
        printf("The word was: %s\n", word);
    }

    return 0;
}