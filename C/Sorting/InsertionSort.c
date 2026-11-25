#include <stdio.h>
void InsertionSort(int arr[], int n){
    int i, j, key;
    for(i = 1; i<n; i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] =arr[j];
            j--;
            arr[j+1] = key;
        }
    }
}

int main(){
    int arr[10], n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("The given array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    InsertionSort(arr, n);
    printf("\nSorted Array: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}