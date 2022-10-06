/** cho mot mang gom n so nguyen hay sap
xep mang do theo thu tu tang dan */


#include <iostream>
using namespace std;
int main ()
{
    int n;
    cin >> n;
    int a[n];


    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (a[j] < a[i]) swap(a[i], a[j]);
            }
    }
    for (int i = 0; i < n; i++) {
        cout <<  a[i] << ' ';
    }


    return 0;
}
