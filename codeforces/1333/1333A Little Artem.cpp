/*
    author    : MishkatIT
    created   : Sunday 2023-04-30-02.55.50
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
        int n, m;
        cin >> n >> m;
        int b = (n * m) / 2 + 1;
        int w = (n * m) - b;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if(i % 2 == j % 2)
                    cout << 'B';
                else if(w--)
                    cout << 'W';
                else cout << 'B';
            }
            cout << '\n';
        }
    }
    return 0;
}

