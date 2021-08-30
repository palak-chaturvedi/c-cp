#include <bits/stdc++.h>
using namespace std;
int reverse(int n){
	int len=0, reverse =0, temp =n;
		while(temp>0){
			temp = temp /10;
			len++;
		}
		while(n>0){
			int rem = n%10;
			// cout<<reverse<<" R";
			n = n/10;
			len--;
			reverse = reverse + rem*pow(10, len);
			

		}
		return reverse;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		if(n==reverse(n)){
			cout<<"wins"<<endl;
		}
		else{
			cout<<"loses"<<endl;
		}
	}
	return 0;
}