/*
    author    : MishkatIT
    created   : Tuesday 2023-02-14-21.11.28
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define debug(_) cout << #_ << " is " << _ << '\n';
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string a, b;
        cin >> a >> b;
        int lena = a.length();
        int lenb = b.length();
        int gcd = __gcd(lena, lenb);
        string tempa, tempb;
        for (int i = 0; i < (lenb / gcd); i++)
        {
            tempa += a;
        }
        for (int i = 0; i < (lena / gcd); i++)
        {
            tempb += b;
        }
        if(tempa == tempb)
            cout << tempa << '\n';
        else
            cout << -1 << '\n';
    }
    return 0;
}
