#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i < n; i++)
#define forj(j) for (int j = n-1; j > 0; j--)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int main()
{
    fio;
    int arr[100], n;
    cin >> n;
    fori(i)
    cin >> arr[i];
    forj(j)
    for(int i=0; i<j; i++)
        if(arr[j]<arr[i])
            swap(arr[i],arr[j]);

    fori(i)
    cout << arr[i] << ' ';
}



