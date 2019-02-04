#include <bits/stdc++.h>
using namespace std;

void lzw_encry(){
    ifstream input_text;
    ofstream encrypted_text;

    input_text.open("input.txt");
    encrypted_text.open("encrypted.txt");

    map<string, int> s_table;
    int i;
    string inp, s;

    char c;
    int in = 0;

    for(i = 0; i < 256; i++ ){

        s_table[string(1,i)] = in++;
    }

    getline(input_text,inp);

    input_text.close();
}
int main()
{
    return 0;
}
