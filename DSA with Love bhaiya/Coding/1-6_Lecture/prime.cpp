#include <iostream>

using namespace std;

int main()
{
    char n;
    cin >> n;

    // for (int i = 2; i < n; i++)
    // {
    //     if (n % i == 0)
    //     {
    //         cout << i << "Not Prime" << endl;
    //     }
    //     else
    //     {
    //         cout << i << "Prime" << endl;
    //     }

    // }

    if (n >= 65 && n <= 90)
    {
        cout << n << " Capital" << endl;
    }
    else if (n >= 97 && n <= 122)
    {
        cout << n << "Lowercase" << endl;
    }
    else if (n >= 48 && n <= 57)
    {
        cout << n << "Integwer" << endl;
    }
    else
    {
        cout << n << "enter a valid no" << endl;
    }

    return 0;
}