#include <bits/stdc++.h>
using namespace std;
char en[100];
char q[100];

void encryption(char st[], int width){
    int i,j;

    int l = strlen(st);

    int a =0;

    for(i = 0; i <width; i++)
    {
        for(j = i; j < l; j = j + width){

                en[a] = st[j];
                a++;
            }
    }
    en[l] = '\0';

    cout <<en << endl;
}

void decryption(char p[], int width){

    int i, j, row;
    int l = strlen(p);
    for( i = 0, j = 0, row = 1; i < l; i++)
    {
        q[j] = p[i];
        j += width;
        if(j >= l)
            j = row++;
    }
    q[l] = '\0';

    cout << q << endl;

}

int main()
{
    int width,i,j;
    char st[100];
    //char en[100];
    //char de[100];
    //string eny;

    cout <<"Enter the strings: ";
    gets(st);
    cout <<"Enter the width: ";
    cin >> width;
    getchar();

    int status;
    cout << "For single transpostion enter 1 and double 2: ";
    cin >> status;

    if(status == 1){
        encryption(st,3);

        decryption(en,3);
    }
    if(status == 2){
        encryption(st,3);
        encryption(en,3);

        //decryption(en,3);
        //decryption(q,3);
    }

    return 0;
}
