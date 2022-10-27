/*
    author    : MishkatIT
    created   : Thursday 2022-10-27-20.42.29
    problem   : 747 B. Mammoth's Genome Decoding
*/
#include<iostream>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    bool ok = true;
    int n;
    string str;
    cin >> n >> str;
    if(n%4 != 0)
    {
        ok = false;
        goto en;
    }
    else
    {
        int A = n/4;
        int C = n/4;
        int G = n/4;
        int T = n/4;
        for(int i=0; i<str.length(); i++)
            if(str[i] == 'A')
                A--;
            else if(str[i] == 'C')
                C--;
            else if(str[i] == 'G')
                G--;
            else if(str[i] == 'T')
                T--;
        for(int i=0; i<str.length(); i++)
            if(str[i] == '?')
            {
                if( A > 0)
                {
                    str[i] = 'A';
                    A--;
                }
                else if( C > 0)
                {
                    str[i] = 'C';
                    C--;
                }
                else if( G > 0)
                {
                    str[i] = 'G';
                    G--;
                }
                else if( T > 0)
                {
                    str[i] = 'T';
                    T--;
                }

            }
        if(A > 0 or C > 0 or G > 0 or T > 0)
            ok = false;

    }

en:
    cout << (ok ? str : "===");


    return 0;
}



