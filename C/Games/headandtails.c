#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

int headtails(){
    int arr[] = {0,1};
    int length = sizeof(arr)/sizeof(arr[0]);
    int arr_index = rand() % length;
    int randum_arr = arr[arr_index];

    return randum_arr;
}

int main(){
    srand(time(NULL));
    char choice[10];
    printf("choose heads or tails\n");
    scanf("%9s", &choice);

    printf("User choose: %s\n", choice);

    int num = headtails();

    switch(num){
        case 0:
        printf("Toss outcome is Heads\n");
        break;

        case 1:
        printf("Toss outcome is Tails\n");
        break;

        default:
        printf("There is an unexpected error in the program");
        break;
    }

    if(num == 0 && strcmp(choice, "heads") == 0 || (num == 1 &&strcmp(choice, "tails") == 0)){
        printf("User won the toss!");
    }
    else{
        printf("User lost the toss!");
    }
}