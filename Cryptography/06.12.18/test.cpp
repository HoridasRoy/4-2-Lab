#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x= 0xDEADBEEF;

    char *y = (char *) &x;

    for(int i = 0; i < 4; i++){

        printf("%x ", 0xFF&y[i]);
   }

}
