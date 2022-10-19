/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-20.04.12
    problem   : 490 A. Team Olympiad
*/
#include<iostream>
#include<vector>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main()
{
    fio;
    vector<int> v1, v2, v3;
    int n, temp, c1=0, c2=0, c3=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        switch(temp)
        {
        case 1:

            c1++;
            v1.push_back(i+1);
            break;

        case 2:

            c2++;
            v2.push_back(i+1);
            break;

        case 3:

            c3++;
            v3.push_back(i+1);
            break;

        }
    }
    int mn = min(min(c1, c2), c3);
    cout << mn << '\n';
    for(int i=0; i<mn; i++)
        cout << v1[i] << ' ' << v2[i] << ' ' << v3[i] << '\n';

    return 0;
}

