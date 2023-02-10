

#include <iostream> 
using namespace std; 
  
// Function to sort an array using DSA 
void sortArray(int arr[], int n) 
{ 
    // 0 and 1 count variables 
    int count0 = 0, count1 = 0; 
  
    // Count the number of 0s and 1s in the array 
    for (int i = 0; i < n; i++) { 
        if (arr[i] == 0) 
            count0++; 
        else if (arr[i] == 1) 
            count1++; 
    } 

    // Update the array with sorted values of 0s and 1s  
    for (int i = 0; i < n; i++) {  

        if (count0 > 0) {  

            arr[i] = 0;  

            count0--;  

        } else if (count1 > 0) {  

            arr[i] = 1;  

            count1--;  

        } else {  

            arr[i] = 2;  

        }  

    }     															                                                                                                                             }     // End of function sortArray()