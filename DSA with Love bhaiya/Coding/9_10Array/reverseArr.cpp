// #include <iostream>

// using namespace std;

// void reverseArr(int arr[], int size)
// {
//     int start = 0;
//     int end = size - 1;
//     while (start <= end)
//     {
//         swap(arr[start], arr[end]);
//         start++;
//         end--;
//     }
// }

// void printArray(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {

//     int arr[6] = {1, 3, 9, 2, 0, -4};
//     int brr[6] = {-90, 8, 9, 56, 29};

//     reverseArr(arr, 6);
//     reverseArr(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);
// }

// Reverse alternate

// #include <iostream>

// using namespace std;

// void reverseArr(int arr[], int size)
// {
//     for (int i = 0; i < size; i += 2)
//     {
//         if (i + 1 < size)
//         {
//             swap(arr[i], arr[i + 1]);
//         }
//     }
// }

// void printArray(int arr[], int size)
// {

//     for (int i = 0; i < size; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main()
// {

//     int arr[6] = {1, 3, 9, 2, 0, -4};
//     int brr[6] = {-90, 8, 9, 56, 29};

//     reverseArr(arr, 6);
//     reverseArr(brr, 5);

//     printArray(arr, 6);
//     printArray(brr, 5);
// }
