#include <iostream>

using namespace std;

// bool search(int arr[], int size, int key)
// {

//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] == key)
//         {
//             return 1;
//         }
//     }

//     return 0;
// }

// int main()
// {

//     int arr[8] = {1, 2, -4, 45, 87, -101, 34, -90};

//     cout << "Plz type a number to searh" << endl;

//     int key;
//     cin >> key;

//     bool found = search(arr, 8, key);

//     if (found)
//     {
//         cout << "number is present" << endl;
//     }
//     else
//     {
//         cout << "number is not present" << endl;
//     }

//     return 0;
// }

int main()
{
    // int size;

    int arr[5] = {234, 54, 76, 345, 54};

    // cout << "please enter input" << endl;
    // cin >> size;
    // for pushing the into array
    // for (int i = 0; i < size; i++)
    // {
    //     cin >> vikas[i];
    //     }

    for (int i = 0; i < arr; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}