#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    char ch;
    cin >> ch;
    int a = ch;

    if ( a >= 97 && a <= 122 ) {
            a = a - 32;
            char kt = a;
            cout << kt;

    } else {
            cout << ch;
    }

    return 0;
}

