#include <iostream>

using namespace std;

int main ()
{
    string s;
    cin >> s;
    int n = s.length();
    int count = 0;
    for (int i = 0; i < n; i++){
        if (s[i] == '2' || s[i] == '3' || s[i] == '5' || s[i] == '7') count ++;
    }
    cout << count;
    return 0;

}
