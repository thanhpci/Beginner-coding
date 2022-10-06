/** Nhap vao tu ban phim 1 chuoi gom n chu cai,
 dem xem trong do moi chu cai duoc xuat hien may lan */

#include <iostream>

using namespace std;

int main ()
{
    string s;
    cin >> s;
    int count[26] = {0};
    int n = s.length();
    for (int i = 0; i < n; i++) {
        count[s[i] - 97]++;
    }
    char ch;
    for (int i = 0; i< 26 ; i++) {
        if (count[i]) {
            ch = i + 97;
            cout << ch << ' ' << count[i] << endl;
        }
    }

   return 0;

}
