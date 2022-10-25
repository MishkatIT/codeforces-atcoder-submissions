/*
    author    : MishkatIT
    created   : Wednesday 2022-10-26-01.22.01
    problem   : 1451 B. Non-Substring Subsequence
*/
#include<iostream>
#include<string>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        int n, q, l, r;
        cin >> n >> q >> str;
        while(q--)
        {
            bool ok = false;
            cin >> l >> r;
            l--;
            r--;
            for(int i=0; i<l; i++)
                if(str[i]==str[l]) //checking the first character of the substring
                {
                    ok = true;
                    break;
                }
            if(!ok)
                for(int i=r+1; i<n; i++)
                    if(str[i]==str[r]) //checking the last character of the substring (previous case failed)
                    {
                        ok = true;
                        break;
                    }
            cout << (ok ? "YES" : "NO") << '\n';
        }

    }

    return 0;
}



