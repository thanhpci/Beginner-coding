#include <iostream>


using namespace std;

bool check(int d, int m, int y) {
    if (m < 1 || m > 12) return false;
    int nhuan = 0;
    if (y % 100 == 0 && y % 400 == 0) nhuan = 1;
    if (y % 100 != 0 && y % 4 == 0) nhuan = 1;
    if (nhuan) {
        if (m == 2) {
            if (d < 1 || d > 29) return false;
            else return true;
        }
    } else {
        if (m == 2) {
            if (d < 1 || d > 28) return false;
            else return true;
        }
    }

    switch (m) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            if (d >= 1 && d <= 31) return true;
            else return false;
            break;
        default:
            if (d >= 1 && d <= 30) return true;
            else return false;
    }


}


/** void zeller(int d, int m, int y) {
    int q = d;
    if (m == 1) m = 14;
    if (m == 2) m = 13;
    int k = y % 100;    //năm thứ bao nhiêu của thế kỉ
    int j = y / 100;    //thế kỉ

    int h = q + (13 * (m + 1)) / 5 + k + k / 4 + j/4 - 2*j;
    cout << h / 7;


}

*/

int main()
{
    char c;
    int d, m, y;
    cin >> d >> c >> m >> c >> y;
    if (check(d, m, y));
    return 0;
}
