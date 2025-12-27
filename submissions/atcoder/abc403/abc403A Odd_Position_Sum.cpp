#include <bits/stdc++.h>
using namespace std;

int main() {
	 int n;
	 cin>>n;
	 vector<int>v(n);
	 for(auto& u:v){
	     cin>>u;
	 }
	 int s=0;
	 for(int i=0;i<n;i+=2){
	       if((i+1)%2!=0){
	            s+=v[i];
	       }
	 }
	 cout<<s<<'\n';

}
