#include <bits/stdc++.h>
using namespace std;

void printRLE(string str)
{
    freopen("test2.txt","w",stdout);
	int l = str.length();
	for (int i = 0; i < l; i++) {

		int count = 1;
		while (i < l - 1 && str[i] == str[i + 1]) {
			count++;
			i++;
		}

		cout << str[i]<<" " << count <<endl;
	}
}

int main()
{
    string st;
	freopen("test.txt","r",stdin);
    getline(cin,st);
	printRLE(st);

	return 0;
}
