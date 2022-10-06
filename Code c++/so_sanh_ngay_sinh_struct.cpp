/** Xđ cau truc date(d, m, y):int
nhap vao 2 ngay date, in ra ket luan ban nao sinh truoc
hay la 2 bạn sinh cung ngay    */


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

    void nhap_dl ()
    {
        cin >> d;
        cin >> m;
        cin >> y;
    }
};

int so_sanh(const date &ngay1, const date &ngay2)
{
    if (ngay1.y < ngay2.y) return 1;
    if (ngay2.y < ngay1.y) return 2;
    if (ngay1.m < ngay2.m) return 1;
    if (ngay2.m < ngay1.m) return 2;
    if (ngay1.d < ngay2.d) return 1;
    if (ngay2.d < ngay1.d) return 2;
    return 0;
}

int main()
{
    date ngay1, ngay2;

    ngay1.nhap_dl();
    ngay2.nhap_dl();

    if (so_sanh(ngay1, ngay2) == 1) cout << "Ban 1 sinh truoc";

    if (so_sanh(ngay1, ngay2) == 2) cout << "Ban 2 sinh truoc";

    if (so_sanh(ngay1, ngay2) == 0) cout << "Hai ban sinh cung ngay";

    return 0;
}

