#include <iostream>

using namespace std;

int main()

{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++) cin >> a[i];

    for (int i = 0; i < n; i++) cout << a[i] << ',';

    cout << endl;

    int i;

    for (i = 1; i < n; i++) {
        if (a[i-1] > a[i]) {
            cout << "False";
            return 0;
        }
    }
    cout << "True";


    return 0;
}
