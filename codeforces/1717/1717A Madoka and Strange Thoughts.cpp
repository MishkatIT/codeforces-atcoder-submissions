#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        cout << n+(n/2)*2 + (n/3)*2 << nl;
    }
    return 0;

}

