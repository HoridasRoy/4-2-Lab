#include <bits/stdc++.h>
using namespace std;

string encry(string st){

    int i;
    for(i = 0; i < st.length(); i++){

        if(st[i] >= 65 && st[i] <= 90)
        {
            st[i] = st[i] + 3;

            if(st[i] >90)
                st[i] = st[i] -26;
        }

        else if(st[i] >=97 && st[i] <= 122)
        {
            st[i] = st[i] + 3;

            if(st[i] >122)
                st[i] = st[i] -26;
        }
    }

    return st;


}

string decry(string st)
{
    int i;

    for(i = 0; i < st.length(); i++){

        if(st[i] >= 65 && st[i] <= 90)
        {
            st[i] = st[i] - 3;

            if(st[i] <65)
                st[i] = st[i] +26;
        }

        else if(st[i] >=97 && st[i] <= 122)
        {
            st[i] = st[i] - 3;

            if(st[i] <97)
                st[i] = st[i] +26;
        }
    }

    return st;
}

int main(){

    int i, j, width;
    string st,x,y;

    cout << "Enter the message: ";
    getline(cin,st);

    cout <<"the message is: " << st <<endl;
    x = encry(st);

    y = decry(x);


    cout <<"The encrypted message is: ";
    cout << x <<endl ;

    cout <<"The decrypted message is: ";
    cout << y << endl;

    return 0;
}
