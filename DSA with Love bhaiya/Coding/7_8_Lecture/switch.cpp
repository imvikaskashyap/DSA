#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    switch (1)
    {
    case 1:
        cout << "Note of 100 Rs. :" << (num / 100) << endl;
        num = num % 100;
    case 2:
        cout << "Note of 50 Rs. :" << (num / 50) << endl;
        num = num % 50;
    case 3:
        cout << "Note of 20 Rs. :" << (num / 20) << endl;
        num = num % 20;

    case 4:
        cout << "Note of 1 Rs. : " << (num / 1) << endl;

        cout << "enter valid amount" << endl;
    }

    return 0;
}