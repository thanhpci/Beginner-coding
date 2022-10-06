// Viết chương trình đọc từ bàn phím một số nguyên trong
// khoảng từ −999.999.999 tới 999.999.999 và in ra cách đọc số đó bằng tiếng Anh


#include <iostream>
#include <cmath>


using namespace std;

void read_million(int million);
void read_thousand(int thousand);
void read_hundred(int k);
void read_ones(int k);
void read_tens(int k);

int main()
{
    int n;
    cin >> n;

    if (n < 0) {
        cout << "negative ";
        n = -n;
    }
    int million = n / pow(10, 6);
    n = n % 1000000;
    int thousand = n / pow(10, 3);

    if (million > 0) read_million(million);
    if (thousand > 0) read_thousand(thousand);

    n = n % 1000;

    read_hundred(n);

    return 0;
}
void read_million(int million)
{
  read_hundred(million);
  cout << "million ";
}

void read_thousand(int thousand)
{
    read_hundred(thousand);

    cout << "thousand ";
}

void read_hundred(int k)
{
    int hundred = k / 100;
    k = k % 100;
    if (hundred > 0){
        read_ones(hundred);
        cout << "hundred ";
    }
    read_tens(k);

}

void read_tens(int k)
{

    int tens = k / 10;
    int ones = k % 10;
    switch(tens)
    {
        case 1:
            switch(ones)
            {
                case 1:
                    cout << "eleven ";
                    break;
                case 2:
                    cout << "twelve ";
                    break;
                case 3:
                    cout << "thirteen ";
                    break;
                case 4:
                    cout << "fourteen ";
                    break;
                case 5:
                    cout << "fifteen ";
                    break;
                case 6:
                    cout << "sixteen ";
                    break;
                case 7:
                    cout << "seventeen ";
                    break;
                case 8:
                    cout << "eighteen ";
                    break;
                case 9:
                    cout << "nineteen ";
                    break;
                case 0:
                    cout << "ten ";
                    break;
            }
            break;

        case 2:
            cout << "twenty";
            if (k != 0) cout << '-'; else cout << ' ';
            read_ones(ones);
            break;
        case 3:
            cout << "thirty";
            if (k != 0) cout << '-'; else cout << ' ';
            read_ones(ones);
            break;
        case 4:
            cout << "forty";
            if (k != 0) cout << '-'; else cout << ' ';
            read_ones(ones);
            break;
        case 5:
            cout << "fifty";
            if (k != 0) cout << '-'; else cout << ' ';
            read_ones(ones);
            break;
        case 6:
            cout << "sixty";
            if (k != 0) cout << '-'; else cout << ' ';
            read_ones(ones);
            break;
        case 7:
            cout << "seventy";
            if (k != 0) cout << '-'; else cout << ' ';
            read_ones(ones);
            break;
        case 8:
            cout << "eighty";
            if (k != 0) cout << '-'; else cout << ' ';
            read_ones(ones);
            break;
        case 9:
            cout << "ninety";
            if (k != 0) cout << '-'; else cout << ' ';
            read_ones(ones);
            break;
        case 0:
            read_ones(ones);
    }
}

void read_ones(int k)
{

    if (k == 1) cout << "one ";
    if (k == 2) cout << "two ";
    if (k == 3) cout << "three ";
    if (k == 4) cout << "four ";
    if (k == 5) cout << "five ";
    if (k == 6) cout << "six ";
    if (k == 7) cout << "seven ";
    if (k == 8) cout << "eight ";
    if (k == 9) cout << "nine ";
}
