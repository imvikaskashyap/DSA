#include <iostream>

using namespace std;

int sumOfArrayElements(int arr[], int n)
{

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{

    int size;
    cin >> size;

    int arr[5];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Sum is : " << sumOfArrayElements(arr, size) << endl;
}