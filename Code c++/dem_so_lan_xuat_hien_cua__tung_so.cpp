/** cho mot so co n chu so dem xem trong do moi so xuat hien bao nhieu lan */


#include <iostream>

using namespace std;

int main ()
{
    string s;
    cin >> s;
    int n = s.length();
    int count[10] = {0};

    for (int i = 0; i < n; i++) {
        count[s[i] - 48 ]++;
    }
    for (int i = 0; i < 10; i++) {
        if ( count[i] ) cout << i << " " << count[i] << endl;
    }


    return 0;

}
