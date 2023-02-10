#include <iostream>
using namespace std;

int main()
{
    // 1 =>

    // int a, b, c;
    // cin >> a >> b >> c;

    // if (a + b > c && b + c > a && c + a > b)
    // {
    //     cout << "valid" << endl;
    // }
    // else
    // {
    //     cout << "invalid" << endl;
    // }

    // int n;
    // cin >> n;

    // 2=>

    // int sum = 0;
    // int num = 1;
    // while (num <= n)
    // {
    //     sum = sum + num;

    //     num = num + 1;
    // }
    // cout << sum << endl;

    // int num = 1;
    // int ans = 1;
    // while (num <= n)
    // {
    //     ans = ans * num;
    //     num++;
    // }
    // cout << ans << endl;

    // 3=>

    // int num = 2;
    // while (num < n)
    // {
    //     if (n % num == 0)
    //     {
    //         cout << "Not prime for" << num << endl;
    //     }
    //     else
    //     {

    //         cout << "Prime for" << num << endl;
    //     }
    //     num = num + 1;
    // }

    // unsigned int c = -456;
    // cout << c << endl;

    // Patterns =>

    int n;
    cin >> n;

    //  => 1

    // int ans = n * n;

    // for (int i = 0; i < n; i++)
    // {

    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ans << " ";

    //         ans = ans - 1;
    //     }
    //     cout << endl;
    // }

    // 2 =>

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= row; col++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}
