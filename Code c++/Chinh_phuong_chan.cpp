#include <iostream>
using namespace std;

void deleteFirstNumber(int *a, int &n)
{
    for (int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    a[n] = NULL;
    n--;

}

int TBC_so_chan(int *a, const int n)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            sum += a[i];
            count++;
        }
    }
    return sum/count;
}

int main()
{
    int n;
    cin >> n;

    int *a = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> *(a + i);
    }

    deleteFirstNumber(a, n);
    cout << "Trung Binh Cong cua cac so chan trong mang:" << TBC_so_chan(a, n);

    return 0;

}
