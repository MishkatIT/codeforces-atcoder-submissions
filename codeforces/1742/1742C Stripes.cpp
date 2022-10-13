/*
    author    : MishkatIT
    created   : Thursday 2022-10-13-21.13.02
    problem   : 1742 C. Stripes
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    string str;
    cin >> t;
    while(t--)
    {
        fio;
        int found=0;
        int uni=0;
        int r=8;
        while(r--)
        {
            cin >> str;
            if(found==1)
                continue;
            sort(str.begin(), str.end());
            uni = unique(str.begin(), str.end())-str.begin();
            if(uni==1 && str[0]=='R')
            {
                found=1;
                if(str[0]=='R')
                    cout << 'R' << '\n';
            }
        }
        if(found==0)
            cout << 'B' << '\n';
    }
    return 0;


}





