#include <iostream>

using namespace std;

int main ()
{
    int n;
    cin >> n;
   int a[n];
   int c;
   for (int i = 0; i< n; i++) cin >> a[i];

   if (a[1] > a[0]) c = 1;
   if (a[1] < a[0]) c = -1;
   if (a[0] == a[1]) {
        cout << "day vo danh";
        return 0;}

   for (int i = 1; i < n ; i++) {
        if ((a[i] == a[i-1]) || ((a[i] > a[i-1])&& c == -1) || ((a[i] < a[i-1])&& c == 1) ) {
                cout << "day vo danh";
                return 0;
        }
   }

   if (c = 1) {
        cout << "day tang";
   } else {
        cout << "day giam";
   }

   return 0;
   }
