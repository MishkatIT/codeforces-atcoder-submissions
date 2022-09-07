#include<iostream>
#define nl "\n"
#define forn(i) for (int i = 0; i < n; i++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()

{
    fio;
    int a, b, c, x, y, t;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c >> x >> y;
        int cnt = 0;
        cnt += max(0, x - a) + max(0, y - b);
        if (cnt > c)
            cout << "NO" << nl;
        else
            cout << "YES" << nl ;
    }

}

