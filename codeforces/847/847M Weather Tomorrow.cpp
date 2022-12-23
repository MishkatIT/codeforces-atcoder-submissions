/*
    author    : MishkatIT
    created   : Saturday 2022-12-24-03.46.56
    problem   : M. Weather Tomorrow
*/
#include<bits/stdc++.h>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
bool ok = true;
int dif(vector<int> temp)
{
    int gap = abs(temp[1] - temp[0]);
    for (int i = 2; i < temp.size(); i++)
    {
        if(abs(temp[i] - temp[i - 1]) != gap)
        {
            ok = false;
            break;
        }
    }
    return gap;
}

int main()
{
    fio;
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mn = *min_element(v.begin(), v.end());
    vector<int> modified(n);
    if(mn < 0)
    {
        for (int i = 0; i < n; i++)
        {
            modified[i] = abs(mn) + v[i];
        }
    }
    int gap;
    if(mn < 0)
        gap = dif (modified);
    else
        gap = dif(v);
    if(ok)
    {

        if(v[0] < v[1])
            cout << v.back() + gap;
        else
            cout << v.back() - gap;
    }
    else
        cout << v.back();
    return 0;
}
