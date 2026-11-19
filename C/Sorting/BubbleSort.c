#include <stdio.h>

void BubbleSort(int arr[], int n){
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = 0; j < n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }  
        }
    }
}

int main(){
    int arr[10], n;

    printf("\nEnter the size of the array to be sorted: ");
    scanf("%d", &n); 
    
    printf("\nEnter the elements in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nThe array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    BubbleSort(arr, n);

    printf("\nSorted array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}