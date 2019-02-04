#include <bits/stdc++.h>
using namespace std;

void f(){

}

void g(){

}

void h(){

}

void i(){
}

int main()
{
    int A = 0x01234567;
    int B = 0x891bcdef;
    int C = 0xfedcba98;
    int D = 0x76543210;

    for(int i = 0; i <64; i++){
        int F, g;
        if (i >= 0 && i <=15){
            F = (B && C) or ((!B) && D);
            //g = i;
        }
        else if(i>= 16 && i <=31){
            F = (D && B) || ((! D)&& C);
            //g = (5*i + 1) % 16;
        }
        else if(i >=32 && i < 48){
            F = B xor C xor D;
            //g = (3*i + 5) % 16;
        }
        else if(i >=48 && i < 64){
            F = C xor (B ||(! D));
            //
        }

        //F = F + A + K[i] + M[g];
        //A = D;
        //D = C;
        //C = B;
        //B = B + leftrotate(F, s[i]);
    }

    return 0;
}

