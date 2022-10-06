/** Dung cap phat dong
viet ham nhap mảng số nguyên n phan tu
viet ham in mang
viet ham tra ve mang con (con tro) chua tat ca cac so nguyen to trong mang */


#include <iostream>
#include <cmath>
using namespace std;
void nhap_mang(int *, const int &);

void in_mang(const int *, const int &);

int *so_nguyen_to(const int *, const int &, int &);

bool check_nt(const int &);
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];

    nhap_mang(a, n);
    in_mang(a, n);

    int m;
    int *b = so_nguyen_to(a, n, m);

    in_mang(b, m);

    delete [] a;
    return 0;
}

void nhap_mang(int *a, const int &n)
{
    for (int i = 0; i < n; i++) {
        cin >> *(a+i);
    }
}

void in_mang(const int *a, const int &n)
{
    for (int i = 0; i < n; i++) {
        cout << *(a+i) << ' ';
    }
    cout << endl;
}
int *so_nguyen_to(const int *a, const int &n, int &m)
{
    int *nt = new int [n];
    m = 0;
    for (int i = 0; i < n; i++) {
        if (check_nt(*(a+i))) {
            *(nt + m) = *(a+i);
            m++;
        }
    }
    return nt;
}
bool check_nt(const int &n)
{
    if ( n < 2)return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

