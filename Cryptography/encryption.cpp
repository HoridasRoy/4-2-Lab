#include <iostream>
#include <map>
#include <string>
#include <fstream>
#include <algorithm>
using namespace std;

int main()
{
    ifstream dict;
    ofstream enc;
    string mes, ciph, msg, cipher_text;
    map < string, string > m;

    dict.open("dictionary.txt");
    enc.open("encrypted_text.txt");


    while(dict >> mes >> ciph)
    {
        m[mes] = ciph;
    }

    //cin >> msg;
    getline(cin, msg);
    cout << msg << endl;
    replace(msg.begin(), msg.end(), ' ', '_');
    cout << msg << endl;
    int len = msg.size();

    while(len % 3 != 0)
    {
        msg += "_";
        len = msg.size();
    }
    cout << msg << endl;
    for(int i = 0; i < len;)
    {
        string s;
        for(int j = 0; j < 3; j++)
            s += msg[i++];
        enc << m[s];
        cout << s << " => " << m[s] << endl;
    }

    dict.close();
    enc.close();
}
