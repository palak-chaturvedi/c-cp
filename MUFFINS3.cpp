#include <bits/stdc++.h>
using namespace std;



int muffins(int n){
	int k = n/2;
	return k+1;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		cout<<muffins(n)<<endl;
	}
	return 0;
}