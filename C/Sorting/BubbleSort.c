#include <stdio.h>

int BubbleSort(int arr[], int n){
    int i, j, temp;
    for(i = 0; i < n; i++){
        for(j = 0; j = n - i - 1; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }  
        }
    }
    return 0;
}

int main(){
    int arr[10], n;

    printf("Enter the size of the array to be sorted: ");
    scanf("%d", &n); 
    
    printf("Enter the elements in the array: ");
    for(int i = 0; i < n; i++){
        scanf("%d ", &arr[i]);
    }

    printf("The array is: ");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    int result = BubbleSort(arr, n);

    printf("Sorted array is: ", result);

}