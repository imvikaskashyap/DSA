#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // Kisi bhi positive no ka binary nikale
    int n;
    cin >> n;

    // int ans = 0;
    // int i = 0;
    // while (n != 0)
    // {
    //     int bit = n & 1;
    //     ans = (bit * pow(10, i)) + ans;

    //     n = n >> 1;
    //     i++;
    // }

    // cout << "Answer is : " << ans << endl;

    // Kisi bhi Negative no ka binary
    int ans = 0;
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;

        n = n >> 1;
        i++;
    }

    ans = ~ans;
    ans = ans + 1;

    cout << "Answer is : " << ans << endl;
}