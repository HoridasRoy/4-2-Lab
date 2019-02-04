#include <bits/stdc++.h>
using namespace std;

void LZW_encoding(){
    ifstream input_text;
    ofstream encrypted_text;

    input_text.open("input.txt");
    encrypted_text.open("encrypted.txt");

    map <string ,int> s_table;
    int i;
    string inp, s;

    char c;
    int in = 0;

    for(i = 0; i <256; i++){
        s_table[string(1,i)] = in ++;

    }

    getline(input_text,inp);
    input_text.close();

    s = string(1, inp[0]);
    string t;
    int len = inp.size();
    i = 1;
    while(i < len)
    {
        t = string(1, inp[i]);
        if( s_table[s+t] > 0)
            s = s+t;
        else
        {
            encrypted_text << s_table[s] << " ";
            s_table[s+t] = in++;
            s = t;
        }
        i++;
    }
    encrypted_text << s_table[s];
    encrypted_text.close();

}
void LZW_decoding(){


}
int main(){

    LZW_encoding();
    return 0;
}
