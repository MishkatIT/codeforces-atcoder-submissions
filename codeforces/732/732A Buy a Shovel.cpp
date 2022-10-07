#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    int k, r;
    cin >> k >> r;
    for(int i=1;;i++)
        if((k*i)%10==0 || (k*i)%10 == r)
        {
            cout << i;
            break;
        }
}



