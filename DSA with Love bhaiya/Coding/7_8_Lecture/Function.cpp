#include <iostream>

using namespace std;

// int power(int a, int b)
// {

//     int ans = 1;
//     for (int i = 1; i <= b; i++)
//     {
//         ans = ans * a;
//     }

//     return ans;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int answer = power(a, b);
//     cout << "answer is " << answer << endl;

//     return 0;
// }

// Odd Even

// bool isEven(int num)
// {

//     if (num & 1)
//     {
//         return 0;
//     }

//     return 1;
// }

// int main()
// {

//     int num;
//     cin >> num;

//     if (isEven(num))
//     {
//         cout << "num is even" << endl;
//     }
//     else
//     {
//         cout << "num is odd" << endl;
//     }

//     return 0;
// }

// factorial

// int factorial(int n)
// {

//     int fact = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         fact = fact * i;
//     }

//     return fact;
// }

// int nCr(int n, int r)
// {
//     int num = factorial(n);
//     int denom = factorial(r) * factorial(n - r);

//     return num / denom;
// }

// int main()
// {
//     int n, r;
//     cin >> n >> r;
//     int ans = nCr(n, r);

//     cout << "Ans is " << ans << endl;

//     return 0;
// }

// Is Prime =>

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
        if (n % i == 0)
        {
            return 0;
        }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not Prime" << endl;
    }

    return 0;
}