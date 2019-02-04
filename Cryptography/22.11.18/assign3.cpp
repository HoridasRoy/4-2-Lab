#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

using namespace std;

void transposition_decipher(char p[], char q[], int wid) // input, output, width
{
    int i, j, row;
    int len = strlen(p);
    for( i = 0, j = 0, row = 1; i < len; i++)
    {
        q[j] = p[i];
        j += wid;
        if(j >= len)
            j = row++;
    }
    q[len] = '\0';
}

int main()
{
    int i, j, k, n, m, row, col;
    int mat_wid = 3;
    char d[100], e[100], f[100];
    string ab;

    ifstream enc_txt;
    ofstream dec_txt;

    m = 1;
    cout << "Enter 1 for single transpostion, 2 for double" << endl;
    cin >> m;

    enc_txt.open("Encrypted_message.txt");
    dec_txt.open("Decrypted_message.txt");
    while(getline(enc_txt, ab))
    {
        strcpy(d, ab.c_str());
        transposition_decipher(d, f, 3);
        if(m == 2)
            transposition_decipher(f, e, 3);
        cout << e << endl;
        dec_txt << e << endl;
        d[0] = '\0';
    }

}
