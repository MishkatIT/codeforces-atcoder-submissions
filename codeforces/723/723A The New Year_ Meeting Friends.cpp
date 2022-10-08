#include<iostream>
#include<cmath>
#include<algorithm>
#define nl "\n"
#define fori(ini,con,upd) for (int i = ini; i < con; i+=upd)
#define forj(ini,con,upd) for (int j = ini; j < con; j+=upd)
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int Distance(int a[]);
int main()
{
    fio;
    int arr[3];
    fori(0,3,1)
        cin >> arr[i];
    cout << *max_element(arr,arr+3) - *min_element(arr,arr+3);

    return 0;
}




