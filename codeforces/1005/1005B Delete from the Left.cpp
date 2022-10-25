/*
    author    : MishkatIT
    created   : Tuesday 2022-10-25-17.05.44
    problem   : 1005 B. Delete from the Left
*/
#include<iostream>
#include<string>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    string stra, strb;
    cin >> stra >> strb;
    long long lena = stra.length();
    long long lenb = strb.length();
    long long cnt = 0;
    for(long long i=0; i<min(lena, lenb); i++)
        if(stra[lena-1-i]==strb[lenb-1-i])
            cnt++;
        else break;
    cout << (lena+lenb)-cnt*2;

    return 0;
}



