/** dung cap phat dong (mang tang dan)
1 Viet ham nhap vao mang so nguyen n phan tu
2 Ham in ra mang vua nhap vao
3 viet ham chen 1 phan tu x vao mang
Khong dung bat cu thuat toan sap xep nao  */


#include <iostream>

using namespace std;


void nhap_mang (int *, const int);
void xuat_mang (const int *, const int);
void chen_mang (int *, int &n, const int x );


int main()
{
    int n;
    cin >> n;
    int *a = new int [n+1];
    nhap_mang(a, n);
    xuat_mang(a, n);

    int x;
    cin >> x;
    chen_mang(a, n, x);
    xuat_mang(a, n);

    delete [] a ;
    a = NULL;


    return 0;
}

void nhap_mang (int *a, const int n)
{
    for(int i = 0; i < n; i++) {
        cin >> *(a+i);
    }
}

void xuat_mang (const int *a, const int n)
{
    for (int i = 0; i < n; i++) {
        cout << *(a+i) << ' ';
    }
    cout << endl;
}


void chen_mang (int *a, int &n, const int x )
{
    int vt = 0;
    while (*(a+vt) <= x && vt < n) vt++;      /** tim vi tri de chen bang cach tang vt len dan dan */

    for (int i = n; i > vt ; i--){        /** dich tat ca cac so sau vt can chen 1 o */
        *(a+i) = *(a+i-1);
     }

     *(a+vt) = x;       /** cap nhat gia tri x vao vt da tim dc */
     n++;       /** tang kich thuoc cua mang sau khi chen */

}





