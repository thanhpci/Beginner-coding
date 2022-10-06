#include <iostream>

using namespace std;

void swapvalue(string& s1, string& s2) {
    if (s2.size() > s1.size()) {
        string tmp;
        tmp = s1;
        s1 = s2;
        s2 = tmp;
    }

}
void plusbignumber(string s1, string s2) {
    int n1, n2;
    n1 = s1.size();
    n2 = s2.size();
    int d = n1 - n2;
    string result[n1 + 1];

    bool checkmem = false;

    for (int i = n1 - 1; i >= 0; i--) {
        int numberofs1 = s1[i] - '0';

        int tmp;

        if ((i-d) < 0) {
            tmp = numberofs1;
        } else {
            int numberofs2 = s2[i - d] - '0';
            tmp = numberofs1 + numberofs2;
        }

        if (checkmem) tmp++;
        if (tmp > 9) checkmem = true;
        else checkmem = false;

        result[n1-1-i] = (tmp % 10) + '0';
    }
    if (checkmem) {
            result[n1] = '1';
            for(int i = n1; i >= 0; i--) cout << result[i];
    } else {
        result[n1] = '\0';
        for(int i = n1 - 1; i >= 0; i--) cout << result[i];
    }
}


int main()
{
   string s1, s2;
   cout << "Eneter to 2 numbers: ";
   cin >> s1 >> s2;

   swapvalue(s1, s2);

   plusbignumber(s1, s2);

    return 0;
}
