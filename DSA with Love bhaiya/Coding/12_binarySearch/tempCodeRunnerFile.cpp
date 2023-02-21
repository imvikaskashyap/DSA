

#include <iostream> 
using namespace std; 
  
// Function to find pivot element 
int pivot(int arr[], int n) 
{ 
    // Traverse through all array elements 
    int i; 
    for (i = 0; i < n; i++) { 
        // If current element is not smaller than next element then break 
        if (arr[i] > arr[i + 1]) 
            break; 
    } 
  
    return i; 
} 
  
// Driver program to test above function. 
int main() 
{ 

    int arr[] = { 5, 6, 7, 8, 9, 10, 1, 2, 3 }; // Array of size n

    int n = sizeof(arr) / sizeof(arr[0]); // Size of array

    cout << "The pivot element is " << pivot(arr, n); // Print the pivot element

    return 0;  									// Return 0 to main function.  

     }