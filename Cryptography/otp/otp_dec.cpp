#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string key, s;
    ifstream k, msg;
    ofstream dec, k2;
    int len, x;
    k.open("key2.txt");
    k >> key;
    k.close();

    msg.open("encrypted_text_otp.txt");
    msg >> s;
    msg.close();

    len = s.size();
    dec.open("decrypted_text_otp.txt");
    for(int i = 0; i < len; i++)
    {
        x = (((s[i]-97) - ( key[i] - 97 ))+26) % 26;
        dec << (char) (x+97);
    }
    k2.open("key2.txt");
    key.erase(0, len);
    k2 << key;
    k2.close();
}

