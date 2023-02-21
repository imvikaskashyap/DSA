#include <iostream>

using namespace std;

int binarySearch(int arr[], int n, int key)
{

    int start = 0;
    int end = n - 1;

    //  1st approach but there is a problem(2 th pow 31 -1)
    // int mid = (start + end) / 2;

    //  2nd approach (chalaki)

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == key)
        {
            return mid;
        }

        //    Going to right part
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        // Going to left part
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }

    return -1;
}

int main()
{

    int odd[7] = {2, 4, 5, 9, 12, 17, 18};
    int even[10] = {4, 5, 6, 9, 12, 34, 54, 67, 87, 101};

    int index1 = binarySearch(odd, 7, 17);
    int index2 = binarySearch(even, 10, 5);

    // cout << "index of 17 is " << index1 << endl;
    cout << "index of 5 is " << index2 << endl;
}

#include <bits/stdc++.h>

int findPosition(vector<int> &arr, int n, int k)

{

    int start = 0;

    int ans = -1;

    int end = n - 1;

    int mid = start + (end - start) / 2;

    while (start <= end)
    {

        if (arr[mid] == k)
        {

            return mid;
        }

        if (arr[mid] >= arr[start])
        {

            if (arr[mid] >= k && k >= arr[start])
            {

                end = mid - 1;
            }

            else
            {

                start = mid + 1;
            }
        }

        else
        {

            if (arr[mid] <= k && k <= arr[end])
            {

                start = mid + 1;
            }

            else

                end = mid - 1;
        }

        mid = start + (end - start) / 2;
    }

    return ans;
}