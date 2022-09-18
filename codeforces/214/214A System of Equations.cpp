#include<bits/stdc++.h>
#define nl "\n"
#define fori(i) for (int i = 0; i <= num1; i++)
#define forj(j) for (int j = 0; j <= num2; j++)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
typedef long long int lli;
typedef long int li;
typedef long double llf;
using namespace std;
int process(int num1, int num2)
{
    int cnt =0;
    fori(i)
        forj(j)
            if(i*i+j == num1 && i+ j*j == num2)
                cnt++;
    return cnt;
}

int main()
{
    int n, m;
    fio;
    cin >> n >> m;
    cout <<  process(n, m);
}


