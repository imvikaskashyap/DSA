#include <iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 6;

    cout << (a & b) << endl;
    cout << (a | b) << endl;
    cout << ~a << endl;
    cout << (a ^ b) << endl;

    cout << (15 >> 1) << endl;
    cout << (15 >> 2) << endl;
    cout << (12 << 1) << endl;
    cout << (12 << 2) << endl;

    return 0;
}