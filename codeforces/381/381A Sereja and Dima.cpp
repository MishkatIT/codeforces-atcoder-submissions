#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    long int n, i, sereja = 0, dima = 0, mx;
    cin >> n;
    long int arr[n];
    for(i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int b = 1, a = n, i = 0; b <= n;)
    {

        mx = max (arr[i], arr[a-1]);
        sereja += mx;


        if(mx == arr[i])
            i++;
        else
            a--;


        if( b == n)
            break;


        mx = max (arr[i], arr[a-1]);
        dima += mx;
        b +=2;


        if(mx == arr[i])
            i++;
        else
            a--;



    }
    cout << sereja << " "<< dima << endl;
}
