/*
    author    : MishkatIT
    created   : Monday 2022-10-24-21.20.48
    problem   : 690 C. Unique Number
*/
#include<iostream>
#include<vector>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        vector<int>v;
        int n;
        cin >> n;
        if(n>45)
        {
            cout << "-1" << '\n';
            continue;
        }
        for(int i=9; i>0; i--)
        {
            if(n<=i)
            {
                v.insert(v.begin(), n);
                n = 0;
                break;
            }
            else
            {
                v.insert(v.begin(), i);
                n-=i;
            }
        }
        if(n)
            cout << "-1" << '\n';
        else
        {
            for(auto i: v)
                cout << i;
            cout << '\n';
        }
    }

    return 0;
}

