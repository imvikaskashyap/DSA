#include <iostream>

using namespace std;

// function for min element of array

int getMin(int num[], int size)
{
    int min = INT32_MAX;
    for (int i = 0; i < min; i++)
    {
        if (num[i] < min)
        {
            min = num[i];
        }
    }

    return min;
}

// function for max element of array

int getMax(int num[], int size)
{

    int maxNum = INT32_MIN;

    for (int i = 0; i < size; i++)
    {
        maxNum = max(maxNum, num[i]);

        // if (num[i] > max)
        // {
        //     max = num[i];
        // }
    }

    return maxNum;
}

int main()
{

    // declare size
    int size;
    cin >> size;

    // declare array
    int arr[100];

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    // size of array (not a good way)
    int sizeOfArray = sizeof(arr) / sizeof(int);

    cout << "size of array" << sizeOfArray << endl;

    cout << "Maximum value is " << getMax(arr, size) << endl;
    cout << "Minimum  value is " << getMin(arr, size) << endl;
}
