#include <iostream>
#include <fstream>
#include <string>
#include <map>
using namespace std;

int main()
{
    string key, s;
    ifstream k, msg;
    ofstream enc, k2;
    int len, x;
    k.open("key1.txt");
    k >> key;
    k.close();

    msg.open("message.txt");
    //msg >> s;
    getline(msg, s);
    msg.close();

    len = s.size();
    enc.open("encrypted_text_otp.txt");
    for(int i = 0; i < len; i++)
    {
        x = ((s[i]-97) + ( key[i] - 97 )) % 26;
        enc << (char) (x+97);
    }
    k2.open("key1.txt");
    key.erase(0, len);
    k2 << key;
    k2.close();
}
