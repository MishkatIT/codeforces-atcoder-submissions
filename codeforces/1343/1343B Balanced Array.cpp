
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
        if(n%4!=0) cout << "NO" << endl;
        else
        {
            int s1=0, s2=0;
            cout << "YES" << endl;
            for(int i=2; i<=n; i+=2)
            {
                cout << i << " ";
                s1+=i;
            }
            for(int i=1; i<n-2; i+=2)
            {
                cout << i << " ";
                s2+=i;
            }
            cout << s1-s2 << endl;
        }
    }

    return 0;
}

