/*
    author    : MishkatIT
    created   : Wednesday 2022-11-16-00.44.14
    problem   : 1696 B. NIT Destroys the Universe
*/
#include<iostream>
#include<vector>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
        vector<int> v;
        int ans = 0;
        bool ok = false;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if(temp != 0 || ok)
            {
                v.push_back(temp);
                ok = true;
            }
        }
        for(int i = v.size() - 1; i >= 0; i--)
        {
            if(v[i] == 0)
                v.pop_back();
        }
        if(v.size())
            if(count(v.begin(), v.end(), 0))
                ans = 2;
            else
                ans = 1;
        cout << ans << '\n';

    }


    return 0;
}



