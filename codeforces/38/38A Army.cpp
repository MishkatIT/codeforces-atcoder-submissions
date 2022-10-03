#include<bits/stdc++.h>
#define nl "\n"
#define for(i,a,b) for (int i = a; i < b; i++)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int n, a, b, year=0;
    cin >> n;
    int arr[n];
    for(i,1,n)
        cin >> arr[i];
    cin >> a >> b;
    for(i,a,b)
        year+=arr[i];
    cout << year;
}



