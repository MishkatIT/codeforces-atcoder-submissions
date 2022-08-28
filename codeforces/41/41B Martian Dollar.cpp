#include<iostream>
using namespace std;

int main()
{
    int dolr, n;
    cin >> n >> dolr;
    int arr[n];
    int res = dolr;
    
    for(int i=1; i<=n; i++)
        cin>>arr[i];

    for(int i=1; i<n; i++)
        for(int j=i+1; j<=n; j++)
            res = max(res,dolr / arr[i]*arr[j] + dolr%arr[i]);

    cout << res;
}
