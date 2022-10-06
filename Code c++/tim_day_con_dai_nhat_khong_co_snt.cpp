/** Dung cap phat dong
Viet ham nhap mang so nguyen n phan tu
Viet ham in mang
Tim day con lien tiep co do dai lon nhat khong chua snt nao    */

#include <iostream>
#include <cmath>
using namespace std;
void nhap_mang (int *, int &);
void in_mang (const int *, const int &);
void xu_ly (const int *, const int &, int &, int &);
bool check_prime (const int &);

int main()
{
    int n;
    cin >> n;
    int *a = new int [n];

    nhap_mang(a, n);

    in_mang(a, n);

    int pos_max, len_max;

    xu_ly(a, n, pos_max, len_max);

    for (int i = pos_max; i < (pos_max + len_max); i++) {
        cout << a[i] << ' ';
    }

    delete [] a;

    return 0;
}

void nhap_mang (int *a, int &n)
{
    for (int i = 0; i < n; i++) cin >> a[i];

}
void in_mang (const int *a, const int &n)
{
    for (int i = 0; i < n; i++) {cout << a[i] << ' ';}
    cout << endl;

}
void xu_ly (const int *a, const int &n, int &pos_max, int &len_max)
{
    pos_max = 0;
    len_max = 0;
    int pos, len;

    for (int i = 0; i < n; i++) {
        if (!check_prime(a[i])) {
            pos = i;
            len = 1;

            while (!check_prime(a[j]) && i < n) {
                i++;
                len++;
            }
            if (len > len_max) {
                pos_max = pos;
                len_max = len;
            }
        }
    }
}
bool check_prime (const int &n)
{
    if (n < 2 ) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;

}

