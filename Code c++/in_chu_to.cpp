#include <iostream>

using namespace std;


void print_big_size(string s, int n);

void print_s(char c, int j);


int main()
{
    string s;
    cin >> s;
    int n = s.size();

    print_big_size(s, n);

    return 0;
}


void print_big_size(string s, int n)
{
    for (int j = 0; j < 6; j++) {
        for (int i = 0; i < n; i++) {
            print_s(s[i], j);
        }
        cout << endl;
    }

}

void print_s(char c, int j)
{
    int tmp = toupper(c);
    c = tmp;


    string A[6] = {
        " #### ",
        "#    #",
        "#    #",
        "######",
        "#    #",
        "#    #",
    };
    if (c == 'A') cout << A[j] << ' ';



    string K[6] = {
         "#    #",
         "#   # ",
         "####  ",
         "#  #  ",
         "#   # ",
         "#    #",
    };
    if (c == 'K') cout << K[j] << ' ';


    string U[6] = {
         "#    #",
         "#    #",
         "#    #",
         "#    #",
         "#    #",
         " #### ",
    };
    if (c == 'U') cout << U[j] << ' ';


    string V[6] = {
         "#    #",
         "#    #",
         "#    #",
         "#    #",
         " #  # ",
         "  ##  ",
    };
    if (c == 'V') cout << V[j] << ' ';


    string I[6] = {
        "#",
        "#",
        "#",
        "#",
        "#",
        "#",
    };
    if (c == 'I') cout << I[j] << ' ';

    string N[6] = {
        "#    #",
        "##   #",
        "# #  #",
        "#  # #",
        "#   ##",
        "#    #",

    };
    if (c == 'N') cout << N[j] << ' ';




    string E[6] = {

        "######",
        "#     ",
        "######",
        "#     ",
        "#     ",
        "######",
    };
    if (c == 'E') cout << E[j] << ' ';


    string L[6] = {
        "#     ",
        "#     ",
        "#     ",
        "#     ",
        "#     ",
        "######",
    };
    if (c == 'L') cout << L[j] << ' ';




    string O[6] = {
        " #### ",
        "#    #",
        "#    #",
        "#    #",
        "#    #",
        " #### ",
    };
    if (c == 'O') cout << O[j] << ' ';


    string H[6] = {
         "#    #",
         "#    #",
         "######",
         "#    #",
         "#    #",
         "#    #",

    };
    if (c == 'H') cout << H[j] << ' ';




    string T[6] = {

        "#####",
        "  #  ",
        "  #  ",
        "  #  ",
        "  #  ",
        "  #  ",

    };
    if (c == 'T') cout << T[j] << ' ';

    string M[6] = {

        "#    #",
        "##  ##",
        "# ## #",
        "#    #",
        "#    #",
        "#    #",

    };
    if (c == 'M') cout << M[j] << ' ';




}


