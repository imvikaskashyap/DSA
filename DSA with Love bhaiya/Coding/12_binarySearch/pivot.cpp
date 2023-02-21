#include <iostream>

using namespace std;

int getPivot(int arr[], int n)
{

    //  For min value in Pivot

    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;

    while (s < e)
    {
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }

    //  For max Value in Pivot

    // Traverse through all array elements
    // int i;
    // for (i = 0; i < n; i++)
    // {
    //     // If current element is not smaller than next element then break
    //     if (arr[i] > arr[i + 1])
    //         break;
    // }

    return s;
    // return i;
}
int main()
{

    int pivot[] = {8, 9, 10, 12, 13, 17, 1, 3, 5, 6};

    int pivot1 = getPivot(pivot, 10);

    cout << "pivot element index  is " << pivot1 << endl;
}

// what is pivot in an array using while loop and binary search