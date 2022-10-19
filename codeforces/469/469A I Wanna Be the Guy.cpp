/*
    author    : MishkatIT
    created   : Wednesday 2022-10-19-06.29.42
    problem   : 469 A. I Wanna Be the Guy
*/
#include<iostream>
#include<vector>
#include<algorithm>
#define fio ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
vector<int>v;
void input(int);
int main()
{
    fio;
    int level, a, b;
    cin >> level >> a;
    input(a);
    cin >> b;
    input(b);
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());
    if(v.size()==level)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";


    return 0;
}
void input(int n)
{
    int temp;
    for(int i=0; i<n; i++)
    {
        cin >> temp;
        v.push_back(temp);
    }
}

