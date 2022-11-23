/*
    author    : MishkatIT
    created   : Wednesday 2022-11-23-23.38.09
    problem   : B. Yet Another Bookshelf
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
        int n;
        cin >> n;
        vector<int> v;
        int temp;
        bool ok = false;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp != 0)
                ok = true;
            if(ok)
            {
                v.push_back(temp);
            }
        }
        ok = false;
        int cnt = 0;
        for (int i = v.size() - 1; i >= 0; i--)
        {
            if(v[i] != 0)
                ok = true;
            if(ok)
            {
                if(v[i] == 0)
                    cnt++;
            }
        }
        cout << cnt << '\n';
    }


    return 0;
}



