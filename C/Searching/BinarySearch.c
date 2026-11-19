#include <stdio.h>

int BinarySearch(int arr[], int n, int key){
    int low = 0;
    int high = n-1;
    int mid = 0;

    while(low <= high){
        mid = (low+high)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(arr[mid] > key){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    return -1;
}

int main(){
    int arr[10], n, key, i;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the %d elements in the array: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("The array is : ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\nEnter the element to search: ");
    scanf("%d", &key);

    int result = BinarySearch(arr, n, key);

    if(result == -1){
        printf("Element not found");
    }
    else{
        printf("Element %d found at index %d", key, result);
    }
}