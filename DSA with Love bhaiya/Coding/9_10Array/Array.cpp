#include <iostream>

using namespace std;

int main()
{

    // integer declaration
    int size = 6;
    int val = -24;

    // array declaration

    int arr[size];

    for (int i = 0; i < size; i++)
    {
        arr[i] = val;
        cout << arr[i] << endl;
    }

    return 0;
}
