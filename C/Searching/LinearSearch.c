#include <stdio.h>

int LinearSearch(int arr[], int n, int key){
    int i;
    for(i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int main(){
    int key, n, i;
    int arr[10];

    printf("Enter the size of the array: ");
    scanf("%d", &n);


    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\nEnter the number to search: ");
    scanf("%d", &key);

    int result = LinearSearch(arr, n, key);
    if(result == -1){
        printf("Element %d not found in the array!", key);
    }
    else{
        printf("Element %d found at index %d", key, i);
    }
}