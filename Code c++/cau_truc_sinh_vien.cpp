/** Xđ cau truc date(d, m, y):int
nhap vao 2 ngay date, in ra ket luan ban nao sinh truoc
hay la 2 bạn sinh cung ngay

+++) Xd cau truc sinh_vien (maSv, hoTen(string), ngaysinh(date)
nhap vao danh sach n sinh vien dua ra maSv va ho ten cua ban co ngay sinh lon nhat*/


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

    void xuat_dl ()
    {
        cout << d << '/' << m << '/' << y;


    }
};


struct sinh_vien {
    int masv;
    string hoten;
    date ngaysinh;

    void nhap_dl() {

        cin >> masv;

        cin.ignore(); // bo phim enter sau khi nhap ma sv

        getline (cin, hoten);

        ngaysinh.nhap_dl();
    }

    void xuat_dl ()
    {
        cout << masv << '\t' << hoten << '\t';
        ngaysinh.xuat_dl();
        cout << endl;

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
int ngaysinhlonnhat(const sinh_vien &sv1, const sinh_vien &sv2)
{
    if (so_sanh(sv1.ngaysinh, sv2.ngaysinh) == 1) return sv1.masv;
    if (so_sanh(sv1.ngaysinh, sv2.ngaysinh) == 2) return sv2.masv;
}

int main()
{
    sinh_vien sv1;
    sv1.nhap_dl();
    sv1.xuat_dl();


    sinh_vien sv2;
    sv2.nhap_dl();
    sv2.xuat_dl();


    cout << ngaysinhlonnhat(sv1, sv2); //tra ve msv

    return 0;
}

