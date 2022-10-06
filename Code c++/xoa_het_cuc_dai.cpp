#include <iostream>
using namespace std;

void xoa_mang(int *a, int &n, int p) {
    for (int i = p; i < (n-1); i++) {       // p khi truyen vao ham la i
        a[i] = a[i+1];
    }
    n = n - 1;
}


int main()
{
    int n;
    cin >> n;
    int *a = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }




bool c = true;
while (c) {
        c = false;
        for (int i = 1; i < n - 1; i++) {
            if (a[i] > a[i-1] && a[i] > a[i+1]) {
                xoa_mang(a, n, i);
                c = true;
            }
        }
}



    for (int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }


    return 0;
}
