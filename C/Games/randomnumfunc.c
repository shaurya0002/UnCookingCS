#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    //random number in the range of 1 to 99
    int randum = (rand() % 100) + 1;

    int max, min;
    min = 10;
    max = 20;

    int randum_inrange = (rand() % (max - min + 1)) + min;

    int arr[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(arr)/sizeof(arr[0]);
    int randum_index = (rand() % length);
    int randum_inarr = arr[randum_index];

    printf("a random number is: %d\n", randum);
    printf("a random number between 10 and 20 is: %d\n", randum_inrange);
    printf("a random number in the given array is: %d\n", randum_inarr);
}