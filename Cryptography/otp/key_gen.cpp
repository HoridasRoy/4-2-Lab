#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, i;
    cin >> i;
    ofstream key1, key2, bak;

    key1.open("key1.txt");
    key2.open("key2.txt");
    bak.open("backup_key.txt");
    while(i--)
    {
        x = rand() % 26;
        key1 << (char) (x + 97);
        key2 << (char) (x + 97);
        bak << (char) (x + 97);
    }

    key1.close();
    key2.close();

    return 0;
}
