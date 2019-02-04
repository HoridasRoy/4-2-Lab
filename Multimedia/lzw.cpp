#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map <string, int> s_table;
    int i, j, k, n;
    string inp, s = "A";
    char c;
    int in = 0;
    for(i = 0; i < 256; i++)
    {
        //cout << (char) i <<
        s_table[string(1, i)] = in++;
    }

    //cout << s_table[s];

    cin >> inp;

    s = string(1, inp[0]);
    string t;
    int len = inp.size();
    i = 1;
    //cout << s_table[s] << " ";
    while(i < len)
    {
        t = string(1, inp[i]);
        if( s_table[s+t] > 0)
            s = s+t;
        else
        {
            cout << s_table[s] << " ";
            s_table[s+t] = in++;
            s = t;
        }
        i++;
    }
    cout << s_table[s];
}
