

#include <iostream> 
using namespace std; 
  
// Function to sort an array using two pointer approach 
void twoPointerApproach(int arr[], int n) 
{ 
    int left = 0, right = n - 1; 
  
    while (left < right) { 
        while (arr[left] == 0 && left < right) 
            left++; 

        while (arr[right] == 1 && left < right) 
            right--; 

        if (left < right) { 
            arr[left] = 0; 
            arr[right] = 1; 
            left++; 
            right--; 
        } 
    }  										// Time Complexity: O(n). Space Complexity: O(1).  

     cout << "Sorted Array: " << endl;   // printing the sorted array.  

    for (int i=0; i<n; i++) {  

        cout << arr[i] << " " ;  

    }  

    cout << endl ;     // new line.  

     return ;      // returning from the function.  

 }      // end of the function.  

 int main() {       // main function started.  

     int arr[] = {1, 2, 0, 1, 2, 0, 1, 2};      // given array.  

     int n = sizeof(arr)/sizeof(arr[0]);       // size of the array.  

     twoPointerApproach(arr , n);       // calling the function to sort the array using two pointer approach.  

     return 0;       // returning from the main function.   

 }