#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i < 5; i++)
#define forj(j) for (int j = 1; j <= arr[4]; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int arr[5], cnt=0;
    fori(i)
    {
        cin >> arr[i];
    }
    forj(j)
    {
        if(j%arr[0]==0 || j%arr[1]==0 || j%arr[2]==0 || j%arr[3]==0)
            cnt++;
    }
    cout << cnt;

}



