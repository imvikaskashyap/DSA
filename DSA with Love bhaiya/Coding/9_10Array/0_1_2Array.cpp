#include <iostream>

using namespace std;

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int zeroOnes(int arr[], int n)
{

    int left = 0;
    int right = n - 1;
    while (left < right)
    {

        while (arr[left] == 0 && left < right)
        {
            left++;
        }

        while (arr[right] == 1 && left < right)
        {
            right--;
        }

        // agar yha pahuch gye ho , iska matlab arr[left]==1 and arr[right]==0;

        // if(left<right) aise bhi kar sakte ho

        if ((arr[left] == 1 && arr[right] == 0) && left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
}

int main()
{

    // int arr[8] = {1, 0, 0, 1, 1, 0, 1, 0};
    int arr[8] = {1, 2, 0, 1, 2, 0, 1, 2};

    zeroOnes(arr, 8);
    printArr(arr, 8);
    return 0;
}

// write a dsa solution to sorting an array let arr  = [1, 2, 0, 1, 2, 0, 1, 2] in js ?
