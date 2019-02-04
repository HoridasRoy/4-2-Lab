#include<bits/stdc++.h>
using namespace std;

int main()
{
    ifstream input_text;
    ofstream encrypted_text;

    input_text.open("input.txt");
    encrypted_text.open("encrypted.txt");

    string inp;
    getline(input_text,inp);

    int count = 0;

    for(int i =0; i <=inp.length(); i++){
        if(inp[i] == inp[i++])
        {
            count ++;
        }

    }

    cout << count;
    return 0;
}
