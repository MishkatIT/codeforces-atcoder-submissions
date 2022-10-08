#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    sort(str.begin(), str.end());
    if((unique(str.begin(),str.end())-str.begin())%2==1)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
}
