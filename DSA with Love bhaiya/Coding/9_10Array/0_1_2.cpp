

#include <iostream> 
using namespace std; 
  
// Function to sort an array using DSA 
void sortArray(int arr[], int n) 
{ 
    // Array to store count of 0s, 1s and 2s 
    int count[3] = {0, 0, 0};  
  
    // Count the number of 0s, 1s and 2s in the array 
    for (int i = 0; i < n; i++) 
        count[arr[i]]++;  

    // Update the array with sorted elements 
    int j = 0; 
    for (int i = 0; i < 3; i++) { 

        // Update the array with same occurrences of element as in count[] array. 
        while (count[i] > 0) { 

            arr[j++] = i;  

            // Decrease the count by 1. 
            --count[i];  
        }     

    }     

     cout << "Sorted Array: " << endl;  

     for (int i = 0; i < n; ++i)  

         cout << arr[i] << " " ;  

     cout << endl ;  

 }     

 int main() {     

     int arr[] = {1, 2, 0, 1, 2, 0, 1, 2};     

     int n = sizeof(arr)/sizeof(arr[0]);     

     sortArray(arr, n);     

     return 0 ;      
}