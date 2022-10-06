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

    int count;
    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j] && a[j] != a[0])
                count++;
                a[j] = a[0];
            if (i == 0 && a[j] == a[i])
                count ++;


        }
        cout << a[i] << ' ' << count << endl;
    }

   return 0;

}
