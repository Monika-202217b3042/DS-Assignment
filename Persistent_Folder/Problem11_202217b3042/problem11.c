#include <stdio.h> 

int linearSearch(int arr[], int n, int target) { 
    int i; 
    for (i = 0; i < n; i++) { 
        if (arr[i] == target) { 
            return i; // Element found at index i 
        } 
    } 
    return -1; // Element not found 
} 

int main() { 
    int arr[] = {10, 2, 8, 5, 17}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int target = 8; 
    int result = linearSearch(arr, n, target); 
    
    printf("Assuming that the target element is %d, let's use the example array [10, 2, 8, 5, 17].\n", target);
    printf("Running the code yields the following result:\n");
    
    if (result == -1) { 
        printf("Element not found in the array.\n"); 
    } else { 
        printf("Element found at index: %d\n", result); 
        printf("The element '%d' was found in this instance by the linear search technique at index %d of the array.\n", target, result);
    } 

    return 0; 
}
 



