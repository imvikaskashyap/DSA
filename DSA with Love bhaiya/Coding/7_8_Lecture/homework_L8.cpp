
#include <iostream>

using namespace std;

// 1st =>

// int simpleCalc(int n)
// {

//     return (3 * n + 7);
// }

// int main()
// {
//     int n;
//     cin >> n;

//     int ans = simpleCalc(n);
//     cout << ans << endl;

//     return 0;
// }

// 2nd =>

// int checkOnebit(int n)
// {

//     int count = 0;
//     while (n != 0)
//     {
//         if (n & 1)
//         {
//             count++;
//         }
//         n = n >> 1;
//     }

//     return count;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     int countA = checkOnebit(a);
//     int countB = checkOnebit(b);

//     int total = countA + countB;

//     cout << total << endl;

//     return 0;
// }

// 3rd =>

int fibbonaci(int n)
{

    int ans = 0;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";
    for (int i = 0; i <= n; i++)

    {
        ans = a + b;
        cout << ans << " ";
        b = ans;
        cout << b << " ";
        a = b;
    }

    return ans;
}

int main()
{
    int a;
    cin >> a;

    int fibbo = fibbonaci(a);

    cout << fibbo << endl;

    return 0;
}