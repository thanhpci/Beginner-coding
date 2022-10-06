Dựng lớp Vector thể hiện vector 2 chiều với các hàm tính toán trên vector như sau
Trong đó:

Hàm void truncate(double length) giảm độ dài các tọa độ của vecto v  đi một khoảng length. Hàm này làm thay đổi tọa độ của vecto hiện tại.
Hàm bool isOrtho(const Vector& v) const kiểm tra xem vecto hiện tại và vecto v có trực giao hay không. Nếu có, hàm trả về giá trị 𝑡𝑟𝑢𝑒, ngược lại, trả về giá trị 𝑓𝑎𝑙𝑠𝑒. Hàm không làm thay đổi giá trị của vector hiện tại.
Hàm static float dot(const Vector& v1, const Vector& v2) thực hiện phép nhân vô hướng hai vector, hàm trả về giá trị là một số thực. Hàm không làm thay đổi giá trị của hai vector đầu vào.
From Vương Thị Hải Yến to Me:  (Direct Message) 11:15 AM
Hàm static float cross(const Vector& v1, const Vector& v2) tính tích chéo của hai vector v1 và v2. Hàm trả về kết quả tích chéo là một số thực. Hàm không làm thay đổi giá trị của hai vector đầu vào.
Hàm friend ostream& operator<<(ostream& os, const Vector& v) thực hiện việc định nghĩa lại toán tử << thực hiện việc in kết quả của một vector ra màn hình, kết quả tương tự như khi thực hiện hàm Vector::print(). Hàm trả về luồng đầu ra được định nghĩa tương ứng và không làm thay đổi giá trị của vector truyền vào.


#include <iostream>

class Vector {
    double x_, y_;
public:
    Vector(double x = 0, double y = 0);
    void print(int precision = 2, bool newLine = true);
    void truncate(double length);
    bool isOrtho(const Vector& v) const;
    static float dot(const Vector& v1, const Vector& v2);
    static float cross(const Vector& v1, const Vector& v2);
    friend ostream& operator<<(ostream& os, const Vector& v);
};




struct vector {
    int x;
    int y;

    vector () {}
    vector (int _x, int _y) {
        x = _x;
        y = _y;
    }

    void truncate(double length) {
        x = x - length;
        y = y - length;
    }

    bool isOrtho(const Vector& v) const {

    }

};


static float dot(const Vector& v1, const Vector& v2) {
    double a;
    a = v1.x*v2.x + v1.y*v2.y;
    return a;

}

static float cross(const Vector& v1, const Vector& v2)
{
    double r;
    r = v1.x*v2.y - v1.y*v2.x;
    return r;
}

friend ostream& operator<<(ostream& os, const Vector& v) {

}


using namespace std;


int main()
{
  return 0;
}
