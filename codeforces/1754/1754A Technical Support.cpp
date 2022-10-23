/*
    author    : MishkatIT
    created   : Sunday 2022-10-23-14.26.27
    problem   : 1754 A. Technical Support
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        int n, cntq=0;
        bool ok = true;
        cin >> n >> str;
        for(int i=0; i<n; i++)
        {
            if(str[i]=='Q')
            {
                cntq++;
                ok=true;

            }
            else if(ok)
                cntq--;

            if(cntq==0)
                ok = false;
        }
        if(cntq==0)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }


    return 0;
}

