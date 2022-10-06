#include <iostream>

using namespace std;


void check_around(char **ch, int m, int n, int i, int j);

void print_map(char **ch, int m, int n, int i, int j);


int main()
{
    int m, n;
    cin >> m >> n;
    char **ch = new char* [m];
    for (int i = 0; i < m; i++) {
        *(ch+i) = new char[n];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> ch[i][j];
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            print_map(ch, m, n, i, j);
        }
        cout << endl;
    }


    return 0;
}

void print_map(char **ch, int m, int n, int i, int j)
{
    if (ch[i][j] == '*') cout << "* ";
    else check_around(ch, m, n, i, j);
}


void check_around(char **ch, int m, int n, int i, int j)
{
    int count = 0;


    for (int p = (i - 1); p <= (i + 1); p++) {
        for (int q = (j - 1); q <= (j + 1); q++) {
            if (p < 0 || q < 0 || p >= m || j >= n) continue;
            if (ch[p][q] == '*') count++;
        }
    }

    cout << count << ' ';
}


