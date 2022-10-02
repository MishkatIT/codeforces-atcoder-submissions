#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i < room*2; i++)
#define forj(j) for (int j = 0; j < room*2-1; j+=2)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int room, cnt=0;
    cin >> room;
    int arr[room*2];

    fori(i)
        cin >> arr[i];
    forj(j)
        if(arr[j+1]-arr[j] >=2)
            cnt++;

    cout << cnt;

}



