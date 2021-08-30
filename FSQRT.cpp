#include <bits/stdc++.h>
using namespace std;

int squareroot(int n){
	int s=1, e=n, ans;
	while(s<=e){
		int mid = (s+e)/2;
		if(mid*mid==n){
			return mid;
		}
		else if(mid*mid>n){
			e=mid-1;
		}
		else{
			s=mid+1;
			ans=mid;
		}

	}
	return ans;
}


int main(){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		cout<<squareroot(n)<<endl;
	}
}