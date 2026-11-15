#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

char *logic(void){
    char *choices[] = {"rock", "paper", "scissors"};
    int compChoice = rand() % 3;
    return choices[compChoice];
}

int main(){
    srand(time(NULL));
    char str[10];
    printf("The game of Rock, Paper, Scissors\n");
    printf("User choose:");
    scanf("%9s", &str);

    char *comp = logic();

    printf("User choose: %s\n", str);
    printf("Computer Choose: %s\n", comp);

    if(strcmp(str, comp)==0){
        printf("Its a draw!");
    }
    else if((strcmp(str, "rock")==0 && strcmp(comp, "scissors")==0) || (strcmp(str, "paper")==0 && strcmp(comp, "rock")==0) || (strcmp(str, "scissors")==0 && strcmp(comp, "paper")==0)){
        printf("User wins!");
    }
    else{
        printf("Computer Wins!");
    }

}