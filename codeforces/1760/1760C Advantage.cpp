/*
    author    : MishkatIT
    created   : Monday 2022-11-21-20.58.09
    problem   : 1760 C. Advantage
*/
#include<bits/stdc++.h>
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
        vector <int> v(n), cp(n);
        for(int i = 0; i < n; i++)
            cin >> v[i];
        cp = v;


        sort(cp.begin(), cp.end(), greater<>());
//         for(int i = 0; i < n; i++)
//            cout << cp[i] << ' ';

        for(int i = 0; i < n; i++)
        {
            if(v[i] == cp[0])
            {
                cout << v[i] - cp[1] << ' ';
                continue;
            }
            cout << v[i] - cp[0] << ' ';
        }
        cout << '\n';
    }

    return 0;
}



