#include <iostream>

using namespace std;

void updateArr(int arr[], int n)
{
    // updating the array
    arr[0] = 111;
    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "going back to main function" << endl;
}

int main()
{

    int arr[3] = {1, 2, 3};

    updateArr(arr, 3);

    for (int i = 0; i < 3; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}