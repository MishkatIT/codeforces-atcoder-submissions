#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        int mn = min (a, b);
        int mx = max (a, b);
        mn = mn*2;
        mx = max (mn, mx);
        cout << mx*mx << endl;


    }
}



