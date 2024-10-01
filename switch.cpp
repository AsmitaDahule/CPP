#include <iostream>
using namespace std;
int main()
{
    char button;
    cout << "Enter a character" << endl;
    cout << "a.Marathi \n b.Hindi \n c.English \n " << endl;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout <<"Hare KRishna" << endl;
        break;
    case 'b':
        cout << "Namaste" << endl;
        break;
    case 'c':
        cout << "Hello" << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
        break;
    }

    return 0;
}