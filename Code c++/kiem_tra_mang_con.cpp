#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int m;
    cin >> m;
    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    if (m < n) {
        cout << "NO";
        return 0;
    }


    for (int i = 0; i <= (m - n); i++) {
        if (b[i] == a[0]) {
            int j;
            for (j = 0; j < n; j++) {
                    if (a[j] != b[i+j]) break;
            }
            if (j == n){
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";

    return 0;
}
