#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
    bool a[n+1] = {};


    for (int i = 2 ; i <= n; i++) {
        if (a[i]) cout << i << ' ';
        for (int j = i + 1; j < n; j++) {
            if (j % i == 0) a[n] = false;
        }

    }
   return 0;

}
