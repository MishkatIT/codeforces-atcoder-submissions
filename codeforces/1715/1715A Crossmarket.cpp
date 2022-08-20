#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int t, a, b;
    cin >> t;
    while(t--)
    {
        cin >> a >> b;
        int mx = max(a,b);
        int mn = min(a,b);
        if(a==1 && b==1)
             cout << "0" << endl;
        else
            cout << mx + 2*(mn-1) << endl;
    }
}
