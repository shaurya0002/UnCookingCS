#include <stdio.h>

void SelectionSort(int arr[], int n){
    int i, j, min, temp;
    for(i = 0;i < n-1;i++){
        min = i;
        for(j = i+1;j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
}

int main(){
    int arr[10], n;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    printf("Enter the elements in the array: \n");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    SelectionSort(arr, n);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}