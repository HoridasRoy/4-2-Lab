#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,i;
    cin >> i;
    ofstream key1,key2,backup;

    key1.open("key1.txt");
    key2.open("key2.txt");
    backup.open("backup.txt");

    while(i--){
        x = rand() % 26;
        key1 << (char) (x + 97);
        key2 << (char) x;
        backup << (char) x;
    }
    key1.close();
    key2.close();
    backup.close();

    return 0;
}
