/** in ra ma so cua hinh chu nhat lon nhat trong mang    */


#include <iostream>


using namespace std;



struct hcn {
    int key;
    double c_rong;
    double c_dai;
/**
    hcn (){}

    hcn (int _key,double c_r, double c_d) {
        key = _key;
        c_rong = c_r;
        c_dai = c_d;
    }

    void print() {
        cout << c_rong << ' ' << c_dai << endl;
    }

    void nhapdl() {
        cin >> key >> c_rong >> c_dai;


    }
*/

};


/**
void nhap_hcn(hcn *arr, const int &n)
{
    for (int i = 0; i < n; i++) {
        arr[i].nhapdl();
    }

}

void in_hcn(hcn *arr, const int &n)
{
    for (int i = 0; i < n; i++) {
        arr[i].print();
    }

}
*/

int main()
{
    hcn arr[20];
    int n;
    cin >> n;

    // nhap_hcn(arr, n);

    // in_hcn(arr, n);

    return 0;
}

