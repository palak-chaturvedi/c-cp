#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
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
		cout<<reverse<<endl;


		
	}
	return 0;
}