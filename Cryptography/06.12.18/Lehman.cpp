#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long p ;
    cin >> p;
    int a;
    cin >> a;
    long long e = (p - 1 )/2;

    long long f = (long long)pow(a, e) % p;


    if(f % p != 1 && f % p != p - 1)
        cout << p << " is definitely not prime." << endl;
    else
        cout << p << " has 50% probability of being prime." << endl;

    return 0;
}
