#include<iostream>
#define nl "\n"
#define forn(i) for (int i = 1; i < n; i=i+2)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n%2==0)
        {
            forn(i)
            {
                cout <<i+1 << ' ' << i << ' ';
            }
        }
        else
        {
            cout << "3 1 2 ";
            for(int i=4; i<=n; i=i+2)
            {
                cout << i+1 << ' ' << i << ' ';
            }
        }
        cout << nl ;
    }
    return 0;
}
