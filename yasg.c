#include <stdio.h>

// Function to rearrange array so that negative numbers are moved to the beginning
void rearrange(int arr[], int n) {
    int i = 0, j = n - 1;
    
    // Loop to rearrange array elements
    while (i <= j) {
        // If the current element is negative, just move to the next element
        if (arr[i] < 0) {
            i++;
        } 
        // If the current element is positive, swap it with the element at the end of the array
        else if (arr[j] > 0) {
            j--;
        } 
        // Swap elements if arr[i] is positive and arr[j] is negative
        else {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
}

int main() {
    int arr[] = {-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    rearrange(arr, n);
    
    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
