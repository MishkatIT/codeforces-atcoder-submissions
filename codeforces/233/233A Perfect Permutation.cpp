#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 1; i <= num; i+=2)
#define forj(j) for (int j = i+1; j < n; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;

int main()
{
    fio;
    int num;
    cin >> num;
    if(num%2==1)
        cout << "-1";
    else
        fori(i)
        {
            int a = i, b = i+1;
            swap(a, b);
            cout << a << " " << b << " ";
        }




}


