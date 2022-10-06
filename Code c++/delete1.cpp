
#include <iostream>


using namespace std;


struct date
{
    int d;
    int m;
    int y;

    date () {}

    date (double _d, double _m, double _y)
    {
        d = _d;
        m = _m;
        y = _y;
    }


};


int main()
{
    int d, m, y;
    cin >> d >> m >> y;
    cin >> d >> m >> y;

    date mong_mot(d, m, y);

    cout << mong_mot.d ;

    return 0;
}


