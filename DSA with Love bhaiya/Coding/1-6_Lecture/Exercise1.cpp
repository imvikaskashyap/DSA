#include <iostream>

using namespace std;

int main()
{
    // Q1 =>

    // for (int i = 0; i <= 5; i--)
    // {
    //     cout << i << " ";
    //     i++;
    // }

    // Q2 =>

    // for (int i = 0; i <= 15; i += 2)
    // {
    //     cout << i << " ";

    // yeh 1 increase krne ke liye condition hai

    //     // if (i & 1)
    //     // {
    //     //     continue;
    //     // }
    //     // i++;
    // }

    // Q3 =>

    for (int i = 0; i < 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            cout << i << " " << j << endl;
        }
    }
    return 0;
}
