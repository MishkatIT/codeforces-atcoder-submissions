#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  if(n%4==0&&n%100!=0){
    cout<<366;
  }
  else if(n%400==0){
     cout<<366;
  }
  else{
    cout<<365;
  }
}
