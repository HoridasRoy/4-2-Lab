#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    ifstream dict, enc;
    ofstream dec;
    string mes, ciph, msg, decrypt_text;
    map < string, string > m;
    dict.open("dictionary.txt");
    enc.open("encrypted_data.txt");
    dec.open("decrypted_data.txt");

    while(dict >> mes >> ciph)
    {
        m[ciph] = mes;
    }
    enc >> msg;
    int len = msg.size();
    for(int i = 0; i < len;)
    {
        string s;
        for(int j = 0; j < 3; j++)
            s += msg[i++];
        //dec << m[s];
        decrypt_text += m[s];
    }
    replace(decrypt_text.begin(), decrypt_text.end(), '_', ' ');
    dec << decrypt_text;
    cout << decrypt_text << endl;

    dict.close();
    enc.close();
    dec.close();
}
