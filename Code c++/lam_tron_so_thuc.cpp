#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long double a;
    int n;
    cin >> a >> n;
    long long int k = a*pow(10.0, n+1);
    int  d = k % 10;
     k /= 10;
    if (d >=5 ) k +=1;
    a = k;
    a /= pow(10.0, n);
    cout << a;


    return 0;
}
