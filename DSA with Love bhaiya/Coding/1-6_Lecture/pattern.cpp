#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // pattern 1 =>

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << n - j + 1;
    //     }

    //     cout << endl;
    // }

    // pattern 2 =>

    // int count = 1;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << (count) << " ";
    //         count += 1;
    //     }
    //     cout << endl;
    // }

    // pattern 3 =>

    // for (int i = 1; i <= n; i++)
    // {
    //     int value = i;
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i + j - 1 << " ";
    //         // value = value + 1;
    //     }
    //     cout << endl;
    // }

    // pattern 4 =>

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i - j + 1 << " ";
    //     }
    //     cout << endl;
    // }

    // pattern 5 =>

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' + j - 1;

    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // pattern 6 =>

    // char start = 'A';
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++)
    //     {

    //         cout << start << " ";
    //         start = start + 1;
    //     }
    //     cout << endl;
    // }

    // Pattern 7 =>

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' - 1 + i + j - 1;

    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // Pattern 8 =>

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= i; j++)
    //     {
    //         char ch = 'A' + i - 1;

    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // Pattern 9 =>

    // char ch = 'A';

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= i; j++)
    //     {

    //         cout << ch << " ";

    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    // Pattern 9 =>

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= i; j++)
    //     {
    //         char ch = 'A' + n + j - i - 1;

    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }
    // Pattern 10 =>

    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= n; j++)
    //     {
    //         char ch = 'A' + i + j - 2;

    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }

    // Star(*) Pattern

    // Pattern 1 =>

    // int row = 1;
    // while (row <= n)
    // {
    //     // space print
    //     int space = n - row;
    //     while (space)
    //     {
    //         cout << " ";
    //         space--;
    //     }

    //     // * print
    //     int col = 1;
    //     while (col <= row)
    //     {
    //         cout << "*";
    //         col++;
    //     }
    //     cout << endl;
    //     row++;
    // }

    // Pattern 2 =>

    int row = 1;
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            int star = n;
            while (star)
            {
                cout << "*";
                star--;
            }

            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}