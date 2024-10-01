#include <iostream>
using namespace std;
int main()
{
    char character;
    cout << "Enter a character between a to z" << endl;
    cin >> character;

    switch (character)
    {
    case 'a':
        cout << "vovel" << endl;
        break;
    case 'e':
        cout << "vovel" << endl;
        break;
    case 'i':
        cout << "vovel" << endl;
        break;
     case 'o':
        cout <<"vovel" << endl;
        break;
         case 'u':
        cout << "vovel"<< endl;
        break;
    default:
        cout <<"alfabet" << endl;
        break;
    }

    return 0;
}