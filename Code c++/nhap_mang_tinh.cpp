#include <iostream>
using namespace std;


void in_mang(int a[], int n)
{
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}


int main()
{
    int arr[44];
    for (int i = 0; i < 44; i++) arr[i] = i;
    in_mang(arr, 44);

    return 0;
}

