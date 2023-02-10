// #include <iostream>
// using namespace std;

// int main()
// {
//     char input;
//     cout << "Enter a character: ";
//     cin >> input;

//     if (input >= 'A' && input <= 'Z')
//     {
//         cout << "Upper case letter" << endl;
//     }
//     else if (input >= 'a' && input <= 'z')
//     {
//         cout << "Lower case letter" << endl;
//     }
//     else if (input >= '0' && input <= '9')
//     {
//         cout << "Number" << endl;
//     }
//     else
//     {
//         cout << "Invalid input" << endl;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter an integer: ";
    cin >> input;

    char output = static_cast<char>(input);
    cout << "The character representation of " << input << " is " << output << endl;

    return 0;
}
